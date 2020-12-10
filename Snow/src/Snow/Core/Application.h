#pragma once

#include "Core.h"

namespace Snow
{
	class SNOW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	 
	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}

