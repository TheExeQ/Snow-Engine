#include <Snow.h>

class Sandbox : public Snow::Application
{
public:
	Sandbox()
	{
		Snow::Application::Run();
	}

	~Sandbox()
	{

	}
};

Snow::Application* Snow::CreateApplication()
{
	return new Sandbox();
}