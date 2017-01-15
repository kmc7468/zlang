#include "int8.hpp"

namespace libz::types
{
	int int8::compare(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			const int8& ins_conv = (const int8&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::add(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data + ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::sub(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data - ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::mul(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data * ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::div(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data / ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::mod(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data % ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8:: and (const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data & ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8:: or (const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data | ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8:: xor (const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data ^ ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::not() const
	{
		return std::make_shared<int8>(~this->m_data);
	}
	ptr<instance> int8::lshift(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data << ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::rshift(const instance& ins) const
	{
		if (ins.type() == type::int8)
		{
			return std::make_shared<int8>(this->m_data >> ((const int8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int8::sign() const
	{
		return std::make_shared<int8>(-this->m_data);
	}
}