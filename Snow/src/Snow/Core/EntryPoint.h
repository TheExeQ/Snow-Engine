#pragma once
#include <stdio.h>

#ifdef SNOW_PLATFORM_WINDOWS

extern Snow::Application* Snow::CreateApplication();

int main(int argc, char** argv)
{
	Snow::Log::Init();
	SNOW_CORE_WARN("Init Log!");
	int a = 5;
	SNOW_INFO("Hello! Var={0}", a);

	printf("Snow Engine");
	auto app = Snow::CreateApplication();
	app->Run();
	delete app;
}

#endif