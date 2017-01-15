#include <libz.hpp>
#pragma comment(lib, "libz.lib")

#include <iostream>

int main()
{
	libz::types::int32 ai(5);
	libz::types::pointer aptr(libz::type::int32, &ai);
	libz::types::pointer aptr2(libz::type::pointer, &aptr);
	libz::types::pointer aptr3(libz::type::pointer, &aptr2);

	libz::types::pointer bptr(libz::type::pointer, nullptr);

	try
	{
		std::cout << aptr3.equals_type(bptr) << std::endl;
	}
	catch (libz::exces::invalid_call& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}