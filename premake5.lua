-- premake5.lua
workspace "beatrice"
   configurations { "Debug", "Release" }

project "beatrice"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"
   --includedirs { "./dep/include/"}
   --libdirs { "./dep/lib/" }
   --links { "lunomath" }
   files { "./src/**.h", "./src/**.hpp", "./src/**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"
