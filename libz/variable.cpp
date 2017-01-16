#include "variable.hpp"
#include "types/types.hpp"

namespace libz
{
	instance& instance::assign(const instance& ins)
	{
		if (this->m_type == ins.m_type)
		{
			switch (this->m_type)
			{
			case type::bool_:
				((types::bool_*)this)->assign((const types::bool_&)ins);
				break;

			case type::char_:
				((types::char_*)this)->assign((const types::char_&)ins);
				break;

			case type::int8:
				((types::int8*)this)->assign((const types::int8&)ins);
				break;

			case type::uint8:
				((types::uint8*)this)->assign((const types::uint8&)ins);
				break;

			case type::int16:
				((types::int16*)this)->assign((const types::int16&)ins);
				break;

			case type::uint16:
				((types::uint16*)this)->assign((const types::uint16&)ins);
				break;

			case type::int32:
				((types::int32*)this)->assign((const types::int32&)ins);
				break;

			case type::uint32:
				((types::uint32*)this)->assign((const types::uint32&)ins);
				break;

			case type::int64:
				((types::int64*)this)->assign((const types::int64&)ins);
				break;

			case type::uint64:
				((types::uint64*)this)->assign((const types::uint64&)ins);
				break;

			case type::real32:
				((types::real32*)this)->assign((const types::real32&)ins);
				break;

			case type::real64:
				((types::real64*)this)->assign((const types::real64&)ins);
				break;

			case type::pointer:
				((types::pointer*)this)->assign((const types::pointer&)ins);
				break;

			default:
				throw exces::invalid_type();
			}
		}

		return *this;
	}
	instance& instance::assign(instance&& ins)
	{
		if (this->m_type == ins.m_type)
		{
			switch (this->m_type)
			{
			case type::bool_:
				((types::bool_*)this)->assign((types::bool_&&)std::move(ins));
				break;

			case type::char_:
				((types::char_*)this)->assign((types::char_&&)std::move(ins));
				break;

			case type::int8:
				((types::int8*)this)->assign((types::int8&&)std::move(ins));
				break;

			case type::uint8:
				((types::uint8*)this)->assign((types::uint8&&)std::move(ins));
				break;

			case type::int16:
				((types::int16*)this)->assign((types::int16&&)std::move(ins));
				break;

			case type::uint16:
				((types::uint16*)this)->assign((types::uint16&&)std::move(ins));
				break;

			case type::int32:
				((types::int32*)this)->assign((types::int32&&)std::move(ins));
				break;

			case type::uint32:
				((types::uint32*)this)->assign((types::uint32&&)std::move(ins));
				break;

			case type::int64:
				((types::int64*)this)->assign((types::int64&&)std::move(ins));
				break;

			case type::uint64:
				((types::uint64*)this)->assign((types::uint64&&)std::move(ins));
				break;

			case type::real32:
				((types::real32*)this)->assign((types::real32&&)std::move(ins));
				break;

			case type::real64:
				((types::real64*)this)->assign((types::real64&&)std::move(ins));
				break;

			case type::pointer:
				((types::pointer*)this)->assign((types::pointer&&)std::move(ins));
				break;

			default:
				throw exces::invalid_type();
			}
		}

		return *this;
	}
	int instance::compare(const instance& ins) const
	{
		return this == &ins ? 0 : (this > &ins ? 1 : -1);
	}
	ptr<instance> instance::add(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::sub(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::mul(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::div(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::mod(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: and (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: or (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance:: xor (const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::not() const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::lshift(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::rshift(const instance&) const
	{
		throw exces::not_impl();
	}
	ptr<instance> instance::sign() const
	{
		throw exces::not_impl();
	}
}