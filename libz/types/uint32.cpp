#include "uint32.hpp"

namespace libz::types
{
	int uint32::compare(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			const uint32& ins_conv = (const uint32&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::add(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data + ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::sub(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data - ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::mul(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data * ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::div(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data / ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::mod(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data % ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32:: and (const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data & ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32:: or (const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data | ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32:: xor (const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data ^ ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::not() const
	{
		return std::make_shared<uint32>(~this->m_data);
	}
	ptr<instance> uint32::lshift(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data << ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint32::rshift(const instance& ins) const
	{
		if (ins.type() == type::uint32)
		{
			return std::make_shared<uint32>(this->m_data >> ((const uint32&)ins).m_data);
		}

		throw exces::invalid_call();
	}
}