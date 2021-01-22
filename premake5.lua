workspace "Keltica"
  architecture "x64"

  configurations
  {
    "Debug",
    "Release",
    "Dist"
  }
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
startproject "Sandbox"

project "Keltica"
  location "Keltica"
  kind "SharedLib"
  language "C++"

  targetdir ("bin/" .. outputdir .. "/%{prj.name}")
  objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

  files
  {
  "%{prj.name}/src/**.h",
  "%{prj.name}/src/**.cpp"
  }
  includedirs
  {
    "%{prj.name}/vendor/spdlog/include",
    "Keltica/src"
  }
  filter "system:windows"
    cppdialect "C++17"
    staticruntime "On"
    systemversion "10.0.17763.0"

    defines
    {
      "KELT_PLATFORM_WINDOWS",
      "KELT_BUILD_DLL"
    }

    postbuildcommands
    {
      ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
    }

    filter "configurations:Debug"
      defines "KELT_DEBUG"
      symbols "On"

    filter "configurations:Release"
      defines "KELT_RELEASE"
      optimize "On"

    filter "configurations:Dist"
      defines "KELT_DIST"
      optimize "On"

project "Sandbox"
  location "Sandbox"
  kind "ConsoleApp"
  language "C++"

  targetdir ("bin/" .. outputdir .. "/%{prj.name}")
  objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

  files
  {
  "%{prj.name}/src/**.h",
  "%{prj.name}/src/**.cpp"
  }
  includedirs
  {
    "Keltica/vendor/spdlog/include",
    "Keltica/src"
  }

  links
  {
    "Keltica"
  }

  filter "system:windows"
    cppdialect "C++17"
    staticruntime "On"
    systemversion "10.0.17763.0"

    defines
    {
      "KELT_PLATFORM_WINDOWS"

    }

  
    filter "configurations:Debug"
      defines "KELT_DEBUG"
      symbols "On"

    filter "configurations:Release"
      defines "KELT_RELEASE"
      optimize "On"

    filter "configurations:Dist"
      defines "KELT_DIST"
      optimize "On"