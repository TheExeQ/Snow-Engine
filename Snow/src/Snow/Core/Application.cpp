#include "Application.h"
#include "../Events/ApplicationEvent.h"

namespace Snow
{
	Application::Application()
	{
		
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		SNOW_TRACE(e);
	}
}
