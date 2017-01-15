#pragma once

#include <exception>

namespace libz::exces
{
	class not_impl final : public std::exception
	{
	public:
		const char* what() const override
		{
			return "구현되지 않았습니다.";
		}
	};
}