#pragma once



#ifdef KELT_PLATFORM_WINDOWS


extern Keltica::Application* Keltica::CreateApplication();



int main(int arc, char** argv)
{
  Keltica::Log::Init();
  KELT_CORE_WARN("...Initializing logger");
  KELT_CORE_INFO("Initialized logger Party on Dude!");
  KELT_CORE_INFO("Welcome to Keltica Engine!\n");

  auto app = Keltica::CreateApplication();
  app->Run();
  delete app;

}



#endif // KLT_PLATFORM_WINDOWS

