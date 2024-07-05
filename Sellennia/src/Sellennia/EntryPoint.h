#pragma once

#ifdef SN_PLATFORM_WINDOWS

extern Sellennia::Application* Sellennia::CreateApplication();

int main(int argc, char** argv) {

	Sellennia::Log::Init();
	SN_CORE_WARN("Initialized Log!");
	SN_INFO("Hello!");

	auto app = Sellennia::CreateApplication();
	app->Run();
	delete app;

}
// comment push test!
#endif // SN_PLATFORM_WINDOWS
