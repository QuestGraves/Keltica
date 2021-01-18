#pragma once

#ifdef KT_PLATFORM_WINDOWS
#ifdef KT_BUILD_DLL
#define KELTICA_API __declspec(dllexport)
#else
#define KETLICA_API __declspec(dllimport)
#endif // KELT_BUILD_DLL
#else
#error KELTICA only supports Windows!
#endif // !KELT_PLATFORM_WINDOWS

