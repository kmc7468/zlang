#include "pointer.hpp"

namespace libz::types
{
	pointer& pointer::assign(const pointer& ins)
	{
		if (this->equals(ins))
		{
			this->m_data = ins.m_data;
			return *this;
		}

		throw exces::invalid_call();
	}
	pointer& pointer::assign(pointer&& ins)
	{
		if (this->equals(ins))
		{
			this->m_data = std::move(ins.m_data);
			return *this;
		}

		throw exces::invalid_call();
	}
	int pointer::compare(const instance& ins) const
	{
		if (ins.type() == type::pointer && this->equals_type((const pointer&)ins))
		{
			const pointer& ins_conv = (const pointer&)ins;
			if (this->m_data == ins_conv.m_data) return 0;
			else if (this->m_data > ins_conv.m_data) return 1;
			else return -1;
		}

		throw exces::invalid_call();
	}
	ptr<instance> pointer::add(const instance& ins) const
	{
		if (ins.type() == type::pointer && this->equals(ins))
		{
			return std::make_shared<pointer>(this->m_datatype, this->m_data + (ptrint)((const pointer&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	ptr<instance> pointer::sub(const instance& ins) const
	{
		if (ins.type() == type::pointer && this->equals(ins))
		{
			return std::make_shared<pointer>(this->m_datatype, this->m_data - (ptrint)((const pointer&)ins).m_data);
		}

		throw exces::invalid_call();
	}
	bool pointer::equals_type(const pointer& ptr) const
	{
		if (this->m_datatype != ptr.m_datatype) return false;
		else if (this->m_datatype == ptr.m_datatype && this->m_datatype != type::pointer) return true;
		else
		{
			pointer* this_ptr = (pointer*)this->m_data;
			pointer* ptr_ptr = (pointer*)ptr.m_data;

			if (this_ptr == nullptr || ptr_ptr == nullptr)
			{
				throw exces::invalid_call();
			}

			while (this_ptr->m_datatype == ptr_ptr->m_datatype)
			{
				if (this_ptr->m_datatype != type::pointer) return true;
				else
				{
					this_ptr = (pointer*)this_ptr->m_data;
					ptr_ptr = (pointer*)ptr_ptr->m_data;

					if (this_ptr == nullptr || ptr_ptr == nullptr)
					{
						throw exces::invalid_call();
					}
				}
			}

			return false;
		}
	}
}