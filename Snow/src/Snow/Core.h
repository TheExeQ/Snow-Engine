#pragma once

#ifdef SNOW_PLATFORM_WINDOWS
	#ifdef SNOW_BUILD_DLL
		#define SNOW_API __declspec(dllexport)
	#else
		#define SNOW_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Snow only supports Windows!
#endif // HZ_PLATFORM_WINDOWS