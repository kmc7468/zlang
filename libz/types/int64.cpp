#include "int64.hpp"

namespace libz::types
{
	int int64::compare(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			const int64& ins_conv = (const int64&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::add(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data + ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::sub(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data - ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::mul(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data * ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::div(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data / ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::mod(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data % ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64:: and (const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data & ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64:: or (const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data | ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64:: xor (const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data ^ ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::not() const
	{
		return std::make_shared<int64>(~this->m_data);
	}
	ptr<instance> int64::lshift(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data << ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::rshift(const instance& ins) const
	{
		if (ins.type() == type::int64)
		{
			return std::make_shared<int64>(this->m_data >> ((const int64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> int64::sign() const
	{
		return std::make_shared<int64>(-this->m_data);
	}
}