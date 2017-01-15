#include "int16.hpp"

namespace libz::types
{
	int int16::compare(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			const int16& ins_conv = (const int16&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::add(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data + ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::sub(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data - ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::mul(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data * ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::div(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data / ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::mod(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data % ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16:: and (const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data & ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16:: or (const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data | ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16:: xor (const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data ^ ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::not() const
	{
		return std::make_shared<int16>(~this->m_data);
	}
	ptr<instance> int16::lshift(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data << ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::rshift(const instance& ins) const
	{
		if (ins.type() == type::int16)
		{
			return std::make_shared<int16>(this->m_data >> ((const int16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int16::sign() const
	{
		return std::make_shared<int16>(-this->m_data);
	}
}