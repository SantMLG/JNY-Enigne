#pragma once

#ifdef  JNY_PLATFORM_WINDOWS

extern JNY::Application* JNY::CreateApplication();

int main(int argc, char** argv) {

	auto app = JNY::CreateApplication();
	app->Run();
	delete app;
}

#endif