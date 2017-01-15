#include "bool.hpp"

namespace libz::types
{
	int bool_::compare(const instance& ins) const
	{
		if (ins.type() == type::bool_)
		{
			const bool_& ins_conv = (const bool_&)ins;

			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> bool_::not() const
	{
		return std::make_shared<bool_>(this->m_data ? false : true);
	}
	ptr<instance> bool_::sign() const
	{
		return std::make_shared<bool_>(this->m_data ? false : true);
	}
}