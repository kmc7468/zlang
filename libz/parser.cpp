#include "parser.hpp"
#include "code.hpp"

namespace libz
{
	void parser::parse(code* const out, const string& fullcode)
	{
		if (fullcode.front() == '[')
		{
			string substr = fullcode.substr(1, fullcode.length() - 2);
			if (substr.find("var ") == 0)
			{
				vector<string> split;
				libz::split(substr, ' ', split);
				out->m_tokens.push_back("var");
				out->m_tokens.push_back(split[1]);
				size_t index = 2;
				if (split[index].front() == '(')
				{
					string temp = split[index].substr(1);
					string item;

					while (temp.length() >= 2)
					{
						if (temp.back() == ')')
						{
							item += ' ' + temp.substr(0, temp.length() - 1);
							break;
						}
						else if (temp.back() == ']')
						{
							item += ' ' + temp.substr(0, temp.length() - 2);
							break;
						}

						item += ' ' + temp;
						temp = split[++index];
					}
					out->m_tokens.push_back(item.substr(1));
				}
				else out->m_tokens.push_back(split[index]);
				if (!(split.size() <= (++index)))
				{
					string temp = split[index];
					if (temp == "=")
					{
						out->m_tokens.push_back("=");
						out->m_tokens.push_back(split[++index].substr(0, split[index].length() - 1));
					}
				}
			}
		}
	}
}