#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Motas::Application* Motas::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Motas::CreateApplication();
	app->Run();
	delete app;
}
#endif