#pragma once
#include <any>
#include <GLFW/glfw3.h>

#include "Core/Event/Event.hpp"

#include "Common.hpp"
#include "WindowProperties.hpp"

namespace dat::platform
{
	class GLFWWindowDestroyer
	{
	public:
		void operator() (GLFWwindow* window);
	};
}

namespace dat::platform
{
	class Window
	{
	public:
		void Initialize(const WindowProperties& properties);

		void Shutdown();

	public:
		void SetEventCallback(const EventCallback& callback);

		void SetProperties(const WindowProperties& properties);

		void PollEvents();

	public:
		void Hide();

		void Show();

		bool IsOpen() const;

	public:
		inline WindowProperties GetProperties() const { return m_Properties; }

		inline GLFWwindow* GetHandle() const { return m_Window.get(); };

	private:
		void SetWindowDataPointer();

		void SetWindowCallbacks();

	private:
		dat_unique<GLFWwindow, GLFWWindowDestroyer> m_Window;
		WindowProperties m_Properties;

		struct WindowData
		{
			EventCallback eventCallback;
		} m_WindowData;
	};
}