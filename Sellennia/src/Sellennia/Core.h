#pragma once

#ifdef SN_PLATFORM_WINDOWS
	#ifdef SN_BUILD_DLL
		#define SELLENNIA_API __declspec(dllexport)
	#else
		#define SELLENNIA_API __declspec(dllimport)
	#endif
#else 
	#error Sellennia only supports Windows
#endif
