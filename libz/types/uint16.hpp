#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class uint16 final : public instance
	{
	private:
		uint16_t m_data = 0;

	public:
		inline uint16()
			: instance(type::uint16)
		{}
		inline uint16(const uint16_t& data)
			: instance(type::uint16), m_data(data)
		{}
		inline uint16(const uint16& org)
			: instance(type::uint16), m_data(org.m_data)
		{}
		inline uint16(uint16&& org)
			: instance(type::uint16), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline uint16& assign(const uint16& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline uint16& assign(uint16&& ins)
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
		inline const uint16_t& value() const
		{
			return this->m_data;
		}
		inline uint16_t& value()
		{
			return this->m_data;
		}
	};
}