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
	class real64 final : public instance
	{
	private:
		double m_data = 0.0;

	public:
		inline real64()
			: instance(type::real64)
		{}
		inline real64(const double& data)
			: instance(type::real64), m_data(data)
		{}
		inline real64(const real64& org)
			: instance(type::real64), m_data(org.m_data)
		{}
		inline real64(real64&& org)
			: instance(type::real64), m_data(std::move(org.m_data))
		{}

	public:
		using instance::operator=;

	public:
		inline real64& assign(const real64& ins)
		{
			this->m_data = ins.m_data;
			return *this;
		}
		inline real64& assign(real64&& ins)
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
		inline const double& value() const
		{
			return this->m_data;
		}
		inline double& value()
		{
			return this->m_data;
		}
	};
}