#include "real32.hpp"

namespace libz::types
{
	int real32::compare(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			const real32& ins_conv = (const real32&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::add(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			return std::make_shared<real32>(this->m_data + ((const real32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::sub(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			return std::make_shared<real32>(this->m_data - ((const real32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::mul(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			return std::make_shared<real32>(this->m_data * ((const real32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::div(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			return std::make_shared<real32>(this->m_data / ((const real32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::mod(const instance& ins) const
	{
		if (ins.type() == type::real32)
		{
			return std::make_shared<real32>(fmodf(this->m_data, ((const real32&)ins).m_data));
		}

		throw exces::invalid_call();
	}
	ptr<instance> real32::sign() const
	{
		return std::make_shared<real32>(-this->m_data);
	}
}