#pragma once



#ifdef KT_PLATFORM_WINDOWS

extern Keltica::Application* Keltica::CreateApplication();



int main(int arc, char** argv)
{
  for (int i = 0; i < 20; i++) printf("*");
  printf("Welcome to Keltica Engine");
  for (int i = 0; i < 20; i++) printf("*");
  auto app = Keltica::CreateApplication();
  app->Run();
  delete app;
  return 0;
}

#endif