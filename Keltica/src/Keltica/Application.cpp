#include "Application.h"
#include <stdio.h>

namespace Keltica {


  Application::Application()
  {

  }

  Application::~Application()
  {
    printf("Destroyed");
  }

  void Application::Run()
  {
    while (true);
  }
}

