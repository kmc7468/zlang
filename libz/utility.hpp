#pragma once

#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace libz
{
	using string = std::string;
	template<typename _Ty>
	using ptr = std::shared_ptr<_Ty>;
	template<typename _Ty>
	using vector = std::vector<_Ty>;
	template<typename _Key, typename _Val>
	using map = std::multimap<_Key, _Val>;

	template<bool _Test, typename _Enable, typename _Disable>
	struct enable_if;
	template<typename _Enable, typename _Disable>
	struct enable_if<true, _Enable, _Disable>
	{
		using _Ty = _Enable;
	};
	template<typename _Enable, typename _Disable>
	struct enable_if<false, _Enable, _Disable>
	{
		using _Ty = _Disable;
	};
	using ptrint = typename enable_if<sizeof(void*) == 8, uint64_t, uint32_t>::_Ty;
}