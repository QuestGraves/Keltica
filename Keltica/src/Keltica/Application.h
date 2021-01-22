#pragma once

#include "Core.h"
#define KELTICA_API __declspec(dllexport)

namespace Keltica {

  class KELTICA_API Application 
  {
  public:

    Application();
    virtual ~Application();
    
    void Run();



  };
  //To be defined in Client
  Application* CreateApplication();
}
  


  