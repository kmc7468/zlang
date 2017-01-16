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
				// TODO
			}
		}
	}
}