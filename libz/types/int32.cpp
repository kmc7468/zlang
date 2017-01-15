#include "int32.hpp"

namespace libz::types
{
	int int32::compare(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			const int32& ins_conv = (const int32&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::add(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data + ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::sub(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data - ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::mul(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data * ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::div(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data / ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::mod(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data % ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32:: and (const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data & ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32:: or (const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data | ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32:: xor (const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data ^ ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::not() const
	{
		return std::make_shared<int32>(~this->m_data);
	}
	ptr<instance> int32::lshift(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data << ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::rshift(const instance& ins) const
	{
		if (ins.type() == type::int32)
		{
			return std::make_shared<int32>(this->m_data >> ((const int32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int32::sign() const
	{
		return std::make_shared<int32>(-this->m_data);
	}
}