#pragma once

#include "Core.h"

namespace JNY {

	class JNY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//Definido en el cliente
	Application* CreateApplication();
}


