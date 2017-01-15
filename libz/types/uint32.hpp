#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class uint32 final : public instance
	{
	private:
		uint32_t m_data = 0;

	public:
		inline uint32()
			: instance(type::uint32)
		{}
		inline uint32(const uint32_t& data)
			: instance(type::uint32), m_data(data)
		{}
		inline uint32(const uint32& org)
			: instance(type::uint32), m_data(org.m_data)
		{}
		inline uint32(uint32&& org)
			: instance(type::uint32), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline uint32& assign(const uint32& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline uint32& assign(uint32&& ins)
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
		inline const uint32_t& value() const
		{
			return this->m_data;
		}
		inline uint32_t& value()
		{
			return this->m_data;
		}
	};
}