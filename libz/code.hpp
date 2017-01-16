#pragma once

#include "parser.hpp"
#include "utility.hpp"

#include <variant>
#include <vector>

namespace libz
{
	enum class option : int
	{
		none = 0,
		extern_,
		static_,
		virtual_ = 4,
		abstract = 8,
		const_ = 16,
		final_ = 32,
	};
	enum class token_info : int
	{
		none = 0,
		template_,
		has_option,
	};
	using token = std::pair<std::variant<string, option>, token_info>;
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

	public:
		inline code& operator=(const code& c)
		{
			return this->assign(c);
		}
		inline code& operator=(code&& c)
		{
			return this->assign(std::move(c));
		}
		bool operator==(const code& c) const = delete;
		bool operator!=(const code& c) const = delete;

	public:
		inline code& assign(const code& c)
		{
			this->m_tokens = c.m_tokens;
			return *this;
		}
		inline code& assign(code&& c)
		{
			this->m_tokens = std::move(c.m_tokens);
			return *this;
		}
		inline const vector<token>& tokens() const
		{
			return this->m_tokens;
		}
	};
}