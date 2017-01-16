#include "utility.hpp"

namespace libz
{
	void split(const string& str, const string::value_type& delim, vector<string>& r)
	{
		std::basic_stringstream<string::value_type> ss;
		ss.str(str);
		string i;
		while (std::getline(ss, i, delim))
		{
			r.push_back(i);
		}
	}
	vector<string> split(const string& str, const string::value_type& delim)
	{
		vector<string> r;
		split(str, delim, r);
		return r;
	}
}