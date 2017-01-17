#pragma once

#include "code.hpp"
#include "utility.hpp"

#include <utility>

namespace libz
{
	class function final
	{
	private:
		string m_name;
		vector<code> m_codes;

	public:
		inline function(const string& name, const vector<code>& codes)
			: m_name(name), m_codes(codes)
		{}
		inline function(const function& func)
			: m_name(func.m_name), m_codes(func.m_codes)
		{}
		inline function(function&& func)
			: m_name(std::move(func.m_name)), m_codes(std::move(func.m_codes))
		{}
		~function() = default;
	};
}