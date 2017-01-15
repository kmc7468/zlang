#include "uint8.hpp"

namespace libz::types
{
	int uint8::compare(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			const uint8& ins_conv = (const uint8&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::add(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data + ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::sub(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data - ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::mul(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data * ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::div(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data / ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::mod(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data % ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8:: and (const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data & ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8:: or (const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data | ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8:: xor (const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data ^ ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::not() const
	{
		return std::make_shared<uint8>(~this->m_data);
	}
	ptr<instance> uint8::lshift(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data << ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint8::rshift(const instance& ins) const
	{
		if (ins.type() == type::uint8)
		{
			return std::make_shared<uint8>(this->m_data >> ((const uint8&)ins).m_data);
		}

		throw exces::invalid_call();
	}
}