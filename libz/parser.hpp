#pragma once

#include "utility.hpp"

namespace libz
{
	class code;

	class parser final
	{
		LIBZ_STATIC_CLASS(parser)

	public:
		static void parse(code* const out, const string& fullcode);
	};
}