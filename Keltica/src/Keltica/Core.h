#pragma once

#ifdef KELT_PLATFORM_WINDOWS
#ifdef KELT_BUILD_DLL
#define KELTICA_API __declspec(dllexport)
#else
#define KETLICA_API __declspec(dllimport)
#endif // KELT_BUILD_DLL
#else
#error SUPPORTS WINDOWS ONLY!
#endif // KT_PLATFORM_WINDOWS


