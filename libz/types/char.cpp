#include "char.hpp"

namespace libz::types
{
	int char_::compare(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			const char_& ins_conv = (const char_&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::add(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data + ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::sub(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data - ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::mul(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data * ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::div(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data / ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::mod(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data % ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_:: and (const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data & ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_:: or (const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data | ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_:: xor (const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data ^ ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::not() const
	{
		return std::make_shared<char_>(~this->m_data);
	}
	ptr<instance> char_::lshift(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data << ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> char_::rshift(const instance& ins) const
	{
		if (ins.type() == type::char_)
		{
			return std::make_shared<char_>(this->m_data >> ((const char_&)ins).m_data);
		}

		throw exces::invalid_call();
	}
}