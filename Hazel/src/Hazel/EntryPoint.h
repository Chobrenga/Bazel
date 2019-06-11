#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("The program is in debug mode!");
	int a = 5;
	HZ_INFO("Initialized Log! a={0}",a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif