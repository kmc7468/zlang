#pragma once

#include "../utility.hpp"
#include "../variable.hpp"
#include "../exces/invalid_call.hpp"

#include <cmath>
#include <cstdint>
#include <memory>
#include <utility>

namespace libz::types
{
	class real32 final : public instance
	{
	private:
		float m_data = 0.0f;

	public:
		inline real32()
			: instance(type::real32)
		{}
		inline real32(const float& data)
			: instance(type::real32), m_data(data)
		{}
		inline real32(const real32& org)
			: instance(type::real32), m_data(org.m_data)
		{}
		inline real32(real32&& org)
			: instance(type::real32), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline real32& assign(const real32& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline real32& assign(real32&& ins)
		{
			this->m_data = std::move(ins.m_data);
			return *this;
		}
		virtual int compare(const instance& ins) const override;
		virtual ptr<instance> add(const instance& ins) const override;
		virtual ptr<instance> sub(const instance& ins) const override;
		virtual ptr<instance> mul(const instance& ins) const override;
		virtual ptr<instance> div(const instance& ins) const override;
		virtual ptr<instance> mod(const instance& ins) const override;
		virtual ptr<instance> sign() const override;
		inline const float& value() const
		{
			return this->m_data;
		}
		inline float& value()
		{
			return this->m_data;
		}
	};
}