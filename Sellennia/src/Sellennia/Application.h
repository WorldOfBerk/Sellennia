#pragma once

#include "Core.h"

namespace Sellennia{

	class SELLENNIA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
