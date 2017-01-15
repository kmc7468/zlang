#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class int8 final : public instance
	{
	private:
		int8_t m_data = 0;

	public:
		inline int8()
			: instance(type::int8)
		{}
		inline int8(const int8_t& data)
			: instance(type::int8), m_data(data)
		{}
		inline int8(const int8& org)
			: instance(type::int8), m_data(org.m_data)
		{}
		inline int8(int8&& org)
			: instance(type::int8), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline int8& assign(const int8& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline int8& assign(int8&& ins)
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
		inline const int8_t& value() const
		{
			return this->m_data;
		}
		inline int8_t& value()
		{
			return this->m_data;
		}
	};
}