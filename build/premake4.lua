-- This is the starting point of the build scripts for the project.
-- It defines the common build settings that all the projects share
-- and calls the build scripts of all the sub-projects.

config = {}

dofile "Helpers.lua"
--dofile "Tests.lua"
dofile "LLVM.lua"

solution "SharpLang"

  configurations { "Debug", "Release" }
  platforms { "x32", "x64" }
  flags { common_flags }
  
  location (builddir)
  objdir (path.join(builddir, "obj"))
  targetdir (libdir)
  debugdir (bindir)

  framework "4.5"
  
  configuration "windows"
    defines { "WINDOWS" }
	
  configuration {}
    
  group "Libraries"
    include (srcdir .. "/SharpLang.Compiler")
    include (srcdir .. "/SharpLang.Compiler.Tests")
    include (srcdir .. "/SharpLang.RuntimeInline")

    include (srcdir .. "/SharpLLVM")
    include (srcdir .. "/SharpLLVM.Native")
    include (srcdir .. "/SharpLLVM.Tests")
