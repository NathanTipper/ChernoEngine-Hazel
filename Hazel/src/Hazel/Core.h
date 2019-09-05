#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API _declspec(dllimport)
	#endif
#else
	#error HAZEL ONLY SUPPORTS WINDOWS
#endif