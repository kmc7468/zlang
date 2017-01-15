#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class pointer final : public instance
	{
	private:
		libz::type m_datatype;
		uint8_t* m_data = 0;

	public:
		inline pointer(const libz::type& datatype)
			: instance(type::pointer), m_datatype(datatype)
		{}
		inline pointer(const libz::type& datatype, void* const& data)
			: instance(type::pointer), m_datatype(datatype), m_data((uint8_t*)data)
		{}
		inline pointer(const pointer& org)
			: instance(type::pointer), m_datatype(org.m_datatype), m_data(org.m_data)
		{}
		inline pointer(pointer&& org)
			: instance(type::pointer), m_datatype(std::move(org.m_datatype)), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		pointer& assign(const pointer& ins);
		pointer& assign(pointer&& ins);
		virtual int compare(const instance& ins) const override;
		virtual ptr<instance> add(const instance& ins) const override;
		virtual ptr<instance> sub(const instance& ins) const override;
		inline uint8_t* const& value() const
		{
			return this->m_data;
		}
		inline uint8_t*& value()
		{
			return this->m_data;
		}
		inline const libz::type& value_type() const
		{
			return this->m_datatype;
		}
		bool equals_type(const pointer& ptr) const;
	};
}