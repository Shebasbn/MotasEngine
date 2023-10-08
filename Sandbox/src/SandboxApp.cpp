#include <MotasEngine.h>

class Sandbox : public Motas::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox() {

	}
};

Motas::Application* Motas::CreateApplication() {
	return new Sandbox();
}