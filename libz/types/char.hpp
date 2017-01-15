#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class char_ final : public instance
	{
	private:
		char16_t m_data = 0;

	public:
		inline char_()
			: instance(type::char_)
		{}
		inline char_(const char16_t& data)
			: instance(type::char_), m_data(data)
		{}
		inline char_(const char_& org)
			: instance(type::char_), m_data(org.m_data)
		{}
		inline char_(char_&& org)
			: instance(type::char_), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline char_& assign(const char_& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline char_& assign(char_&& ins)
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
		inline const char16_t& value() const
		{
			return this->m_data;
		}
		inline char16_t& value()
		{
			return this->m_data;
		}
	};
}