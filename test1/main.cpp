#include <libz.hpp>
#pragma comment(lib, "libz.lib")

#include <iostream>

int main()
{
	libz::code c("[var test (const int32* const)] = 5;");

	return 0;
}