#include <JNY.h>

class Sandbox : public JNY::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

JNY::Application* JNY::CreateApplication()
{
	return new Sandbox();
}