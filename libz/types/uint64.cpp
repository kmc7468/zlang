#include "uint64.hpp"

namespace libz::types
{
	int uint64::compare(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			const uint64& ins_conv = (const uint64&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::add(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data + ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::sub(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data - ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::mul(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data * ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::div(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data / ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::mod(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data % ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64:: and (const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data & ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64:: or (const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data | ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64:: xor (const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data ^ ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::not() const
	{
		return std::make_shared<uint64>(~this->m_data);
	}
	ptr<instance> uint64::lshift(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data << ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> uint64::rshift(const instance& ins) const
	{
		if (ins.type() == type::uint64)
		{
			return std::make_shared<uint64>(this->m_data >> ((const uint64&)ins).m_data);
		}

		throw exces::invalid_call();
	}
}