#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class int64 final : public instance
	{
	private:
		int64_t m_data = 0;

	public:
		inline int64()
			: instance(type::int64)
		{}
		inline int64(const int64_t& data)
			: instance(type::int64), m_data(data)
		{}
		inline int64(const int64& org)
			: instance(type::int64), m_data(org.m_data)
		{}
		inline int64(int64&& org)
			: instance(type::int64), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline int64& assign(const int64& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline int64& assign(int64&& ins)
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
		inline const int64_t& value() const
		{
			return this->m_data;
		}
		inline int64_t& value()
		{
			return this->m_data;
		}
	};
}