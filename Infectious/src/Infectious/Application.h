#pragma once
#include "Core.h";

namespace Infectious{


	class INFECTIOUS_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//to be define by client
	Application* CreateApplication();
}

