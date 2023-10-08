#pragma once

#ifdef MT_PLATFORM_WINDOWS
	#ifdef MT_BUILD_DLL
		#define MOTAS_API __declspec(dllexport)
	#else
		#define MOTAS_API __declspec(dllimport)
	#endif // MT_BUILD_DLL
#else
	#error MotasEngine only supports windows!
#endif
