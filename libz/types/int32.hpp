#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class int32 final : public instance
	{
	private:
		int32_t m_data = 0;

	public:
		inline int32()
			: instance(type::int32)
		{}
		inline int32(const int32_t& data)
			: instance(type::int32), m_data(data)
		{}
		inline int32(const int32& org)
			: instance(type::int32), m_data(org.m_data)
		{}
		inline int32(int32&& org)
			: instance(type::int32), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline int32& assign(const int32& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline int32& assign(int32&& ins)
		{
			this->m_data = std::move(ins.m_data);
			return *this;
		}
		virtual int compare(const instance& ins) const override;
		virtual ptr<instance> add(const instance& ins) const override;
		virtual ptr<instance> sub(const instance& ins) const override;
		virtual ptr<instance> mul(const instance& ins) const override;
		virtual ptr<instance> div(const instance& ins) const override;
		virtual ptr<instance> mod(const instance& ins) const override;
		virtual ptr<instance> and (const instance& ins) const override;
		virtual ptr<instance> or (const instance& ins) const override;
		virtual ptr<instance> xor (const instance& ins) const override;
		virtual ptr<instance> not() const override;
		virtual ptr<instance> lshift(const instance& ins) const override;
		virtual ptr<instance> rshift(const instance& ins) const override;
		virtual ptr<instance> sign() const override;
		inline const int32_t& value() const
		{
			return this->m_data;
		}
		inline int32_t& value()
		{
			return this->m_data;
		}
	};
}