#include "real64.hpp"

namespace libz::types
{
	int real64::compare(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			const real64& ins_conv = (const real64&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::add(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			return std::make_shared<real64>(this->m_data + ((const real64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::sub(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			return std::make_shared<real64>(this->m_data - ((const real64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::mul(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			return std::make_shared<real64>(this->m_data * ((const real64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::div(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			return std::make_shared<real64>(this->m_data / ((const real64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::mod(const instance& ins) const
	{
		if (ins.type() == type::real64)
		{
			return std::make_shared<real64>(fmod(this->m_data, ((const real64&)ins).m_data));
		}

		throw exces::invalid_call();
	}
	ptr<instance> real64::sign() const
	{
		return std::make_shared<real64>(-this->m_data);
	}
}