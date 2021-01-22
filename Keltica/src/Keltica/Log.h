#pragma once
#include "Core.h"
#include <memory>

#include "spdlog/spdlog.h"



namespace Keltica {

  class KELTICA_API Log
  {
  public:
    static void Init();
    inline static  std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    inline static  std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

  private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
  };

};

//Core Logging Macros
#define KELT_CORE_INFO(...)  ::Keltica::Log::GetCoreLogger()->info(__VA_ARGS__);
#define KELT_CORE_WARN(...)  ::Keltica::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define KELT_CORE_ERROR(...) ::Keltica::Log::GetCoreLogger()->error(__VA_ARGS__);
#define KELT_CORE_FATAL(...) ::Keltica::Log::GetCoreLogger()->fatal(__VA_ARGS__);

#define KELT_TRACE(...)   ::Keltica::Log::GetClientLogger()->trace(__VA_ARGS__);
#define KELT_INFO(...)    ::Keltica::Log::GetClientLogger()->info(__VA_ARGS__);
#define KELT_WARN(...)    ::Keltica::Log::GetClientLogger()->warn(__VA_ARGS__);
#define KELT_ERROR(...)   ::Keltica::Log::GetClientLogger()->error(__VA_ARGS__);
#define KELT_FATAL(...)   ::Keltica::Log::GetClientLogger()->fatal(__VA_ARGS__);


