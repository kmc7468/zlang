#pragma once

#include "utility.hpp"
#include "exces/invalid_type.hpp"
#include "exces/not_impl.hpp"

#include <tuple>
#include <utility>

namespace libz
{
	enum class type
	{
		none = 0,
		bool_,
		char_,
		int8,
		uint8,
		int16,
		uint16,
		int32,
		uint32,
		int64,
		uint64,
		real32,
		real64,
		pointer,
		class_,
	};
	class instance
	{
	private:
		type m_type = type::none;

	protected:
		inline instance(const type& type)
			: m_type(type)
		{}

	public:
		inline instance(const instance& ins)
			: m_type(ins.m_type)
		{
			this->assign(ins);
		}
		inline instance(instance&& ins)
			: m_type(ins.m_type)
		{
			this->assign(std::move(ins));
		}
		virtual ~instance() = default;

	public:
		inline instance& operator=(const instance& ins)
		{
			return this->assign(ins);
		}
		inline instance& operator=(instance&& ins)
		{
			return this->assign(std::move(ins));
		}
		inline bool operator==(const instance& ins) const
		{
			return this->compare(ins) == 0;
		}
		inline bool operator!=(const instance& ins) const
		{
			return this->compare(ins) != 0;
		}
		inline bool operator>(const instance& ins) const
		{
			return this->compare(ins) > 0;
		}
		inline bool operator>=(const instance& ins) const
		{
			return this->compare(ins) >= 0;
		}
		inline bool operator<(const instance& ins) const
		{
			return this->compare(ins) < 0;
		}
		inline bool operator<=(const instance& ins) const
		{
			return this->compare(ins) <= 0;
		}
		inline ptr<instance> operator+(const instance& ins) const
		{
			return this->add(ins);
		}
		inline ptr<instance> operator-(const instance& ins) const
		{
			return this->sub(ins);
		}
		inline ptr<instance> operator*(const instance& ins) const
		{
			return this->mul(ins);
		}
		inline ptr<instance> operator/(const instance& ins) const
		{
			return this->div(ins);
		}
		inline ptr<instance> operator%(const instance& ins) const
		{
			return this->mod(ins);
		}
		inline ptr<instance> operator&(const instance& ins) const
		{
			return this-> and (ins);
		}
		inline ptr<instance> operator|(const instance& ins) const
		{
			return this-> or (ins);
		}
		inline ptr<instance> operator^(const instance& ins) const
		{
			return this-> xor (ins);
		}
		inline ptr<instance> operator~() const
		{
			return this->not();
		}
		inline ptr<instance> operator<<(const instance& ins) const
		{
			return this->lshift(ins);
		}
		inline ptr<instance> operator >> (const instance& ins) const
		{
			return this->rshift(ins);
		}
		inline ptr<instance> operator-() const
		{
			return this->sign();
		}
		inline instance& operator+=(const instance& ins)
		{
			return this->assign(*this->add(ins));
		}
		inline instance& operator-=(const instance& ins)
		{
			return this->assign(*this->sub(ins));
		}
		inline instance& operator*=(const instance& ins)
		{
			return this->assign(*this->mul(ins));
		}
		inline instance& operator/=(const instance& ins)
		{
			return this->assign(*this->div(ins));
		}
		inline instance& operator%=(const instance& ins)
		{
			return this->assign(*this->mod(ins));
		}
		inline instance& operator&=(const instance& ins)
		{
			return this->assign(*this-> and (ins));
		}
		inline instance& operator|=(const instance& ins)
		{
			return this->assign(*this-> or (ins));
		}
		inline instance& operator^=(const instance& ins)
		{
			return this->assign(*this-> xor (ins));
		}
		inline instance& operator<<=(const instance& ins)
		{
			return this->assign(*this->lshift(ins));
		}
		inline instance& operator>>=(const instance& ins)
		{
			return this->assign(*this->rshift(ins));
		}

	public:
		virtual instance& assign(const instance& ins);
		virtual instance& assign(instance&& ins);
		virtual int compare(const instance& ins) const;
		inline bool equals(const instance& ins) const
		{
			return this->compare(ins) == 0;
		}
		virtual ptr<instance> add(const instance& ins) const;
		virtual ptr<instance> sub(const instance& ins) const;
		virtual ptr<instance> mul(const instance& ins) const;
		virtual ptr<instance> div(const instance& ins) const;
		virtual ptr<instance> mod(const instance& ins) const;
		virtual ptr<instance> and (const instance& ins) const;
		virtual ptr<instance> or (const instance& ins) const;
		virtual ptr<instance> xor (const instance& ins) const;
		virtual ptr<instance> not() const;
		virtual ptr<instance> lshift(const instance& ins) const;
		virtual ptr<instance> rshift(const instance& ins) const;
		virtual ptr<instance> sign() const;
		inline const type& type() const
		{
			return this->m_type;
		}
	};
	enum class reference_type
	{
		none = 0,
		default,
		lvalue_reference,
		rvalue_reference,
		gc_reference,
	};
	using variable = std::tuple<string, ptr<instance>, reference_type>;
}