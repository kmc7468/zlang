#pragma once

#include <exception>

namespace libz::exces
{
	class invalid_type final : public std::exception
	{
	public:
		const char* what() const override
		{
			return "�߸��� Ÿ���Դϴ�.";
		}
	};
}