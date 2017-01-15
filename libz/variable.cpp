#include "variable.hpp"

namespace libz
{
	instance& instance::assign(const instance& ins)
	{
		if (this->m_type == ins.m_type)
		{
			switch (this->m_type)
			{
			default:
				throw exces::invalid_type();
			}
		}

		return *this;
	}
	instance & instance::assign(instance&& ins)
	{
		if (this->m_type == ins.m_type)
		{
			switch (this->m_type)
			{
			default:
				throw exces::invalid_type();
			}
		}

		return *this;
	}
	int instance::compare(const instance& ins) const
	{
		return this == &ins ? 0 : (this > &ins ? 1 : -1);
	}
	ptr<instance> instance::add(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::sub(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::mul(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::div(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::mod(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: and (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: or (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: xor (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::not() const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::lshift(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::rshift(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::sign() const
	{
		throw exces::not_impl();
	}
}