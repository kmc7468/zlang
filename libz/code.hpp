#pragma once

#include "utility.hpp"

#include <variant>
#include <vector>

namespace libz
{
	using token = std::variant<string, vector<string>>;
	class code final
	{
	private:
		vector<token> m_tokens;

	public:
		
	};
}