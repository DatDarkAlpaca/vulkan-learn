#pragma once
#include "Common.hpp"

#if defined(DAT_PLATFORM_WINDOWS) or defined(DAT_PLATFORM_LINUX) or defined(DAT_PLATFORM_MACOSX)
	#include "Platform/GLFW/Setup_GLFW.hpp"
	#include "Platform/GLFW/Events_GLFW.hpp"
	#include "Platform/GLFW/Window/Window_GLFW.hpp"
	#include "Platform/GLFW/Window/Monitor_GLFW.hpp"

	#include "Platform/GLFW/OpenGL/SetupOpenGL.hpp"
	#include "Platform/GLFW/Vulkan/SetupVulkan.hpp"
#endif