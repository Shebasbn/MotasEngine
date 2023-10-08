#pragma once

#include "Core.h"

namespace Motas {

	class MOTAS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be difined in CLIENT
	Application* CreateApplication();
}

