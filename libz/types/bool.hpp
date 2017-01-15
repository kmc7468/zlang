#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class bool_ final : public instance
	{
	private:
		bool m_data = false;

	public:
		inline bool_()
			: instance(type::bool_)
		{}
		inline bool_(const bool& data)
			: instance(type::bool_), m_data(data)
		{}
		inline bool_(const bool_& org)
			: instance(type::bool_), m_data(org.m_data)
		{}
		inline bool_(bool_&& org)
			: instance(type::bool_), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline bool_& assign(const bool_& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline bool_& assign(bool_&& ins)
		{
			this->m_data = std::move(ins.m_data);
			return *this;
		}
		virtual int compare(const instance& ins) const override;
		virtual ptr<instance> not() const override;
		virtual ptr<instance> sign() const override;
		inline const bool& value() const
		{
			return this->m_data;
		}
		inline bool& value()
		{
			return this->m_data;
		}
	};
}