#pragma once

#include <exception>

namespace libz::exces
{
	class invalid_call final : public std::exception
	{
	public:
		const char* what() const override
		{
			return "�߸��� ȣ���Դϴ�.";
		}
	};
}