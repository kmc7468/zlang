#include "uint16.hpp"

namespace libz::types
{
	int uint16::compare(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			const uint16& ins_conv = (const uint16&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::add(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data + ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::sub(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data - ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::mul(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data * ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::div(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data / ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::mod(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data % ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16:: and (const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data & ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16:: or (const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data | ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16:: xor (const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data ^ ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::not() const
	{
		return std::make_shared<uint16>(~this->m_data);
	}
	ptr<instance> uint16::lshift(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data << ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint16::rshift(const instance& ins) const
	{
		if (ins.type() == type::uint16)
		{
			return std::make_shared<uint16>(this->m_data >> ((const uint16&)ins).m_data);
		}

		throw exces::invalid_call();
	}
}