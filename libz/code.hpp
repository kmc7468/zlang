#pragma once

#include "parser.hpp"
#include "utility.hpp"

#include <variant>
#include <vector>

namespace libz
{
	using token = std::variant<string, vector<string>>;
	class code final
	{
		friend class parser;

	private:
		vector<token> m_tokens;

	public:
		inline code(const string& fullcode)
		{
			parser::parse(this, fullcode);
		}
		inline code(const vector<token>& tokens)
			: m_tokens(tokens)
		{}
		inline code(const code& code)
			: m_tokens(code.m_tokens)
		{}
		inline code(code&& code)
			: m_tokens(std::move(code.m_tokens))
		{}
		~code() = default;
	};
}