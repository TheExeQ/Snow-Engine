#pragma once
#include <stdio.h>

#ifdef SNOW_PLATFORM_WINDOWS

extern Snow::Application* Snow::CreateApplication();

int main(int argc, char** argv)
{
	printf("Snow Engine\n");
	Snow::Log::Init();
	auto app = Snow::CreateApplication();
	app->Run();
	delete app;
}

#endif