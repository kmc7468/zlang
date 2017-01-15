#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class int16 final : public instance
	{
	private:
		int16_t m_data = 0;

	public:
		inline int16()
			: instance(type::int16)
		{}
		inline int16(const int16_t& data)
			: instance(type::int16), m_data(data)
		{}
		inline int16(const int16& org)
			: instance(type::int16), m_data(org.m_data)
		{}
		inline int16(int16&& org)
			: instance(type::int16), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline int16& assign(const int16& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline int16& assign(int16&& ins)
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
		inline const int16_t& value() const
		{
			return this->m_data;
		}
		inline int16_t& value()
		{
			return this->m_data;
		}
	};
}