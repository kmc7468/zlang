#pragma once

#include <exception>

namespace libz::exces
{
	class invalid_call final : public std::exception
	{
	public:
		const char* what() const override
		{
			return "잘못된 호출입니다.";
		}
	};
}