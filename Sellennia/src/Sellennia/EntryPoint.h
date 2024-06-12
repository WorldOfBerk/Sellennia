#pragma once

#ifdef SN_PLATFORM_WINDOWS

extern Sellennia::Application* Sellennia::CreateApplication();

int main(int argc, char** argv) {

	printf("Welcome to the Sellennia Engine");
	auto app = Sellennia::CreateApplication();
	app->Run();
	delete app;

}

#endif // SN_PLATFORM_WINDOWS
