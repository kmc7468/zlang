#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class uint64 final : public instance
	{
	private:
		uint64_t m_data = 0;

	public:
		inline uint64()
			: instance(type::uint64)
		{}
		inline uint64(const uint64_t& data)
			: instance(type::uint64), m_data(data)
		{}
		inline uint64(const uint64& org)
			: instance(type::uint64), m_data(org.m_data)
		{}
		inline uint64(uint64&& org)
			: instance(type::uint64), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline uint64& assign(const uint64& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline uint64& assign(uint64&& ins)
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
		inline const uint64_t& value() const
		{
			return this->m_data;
		}
		inline uint64_t& value()
		{
			return this->m_data;
		}
	};
}