#pragma once

#include "Core.h"

namespace Keltica {

  class __declspec(dllexport) Application //TODO: KELTICA_API; figure out why your macro isn't working 
  {
  public:

    Application();
    virtual ~Application();

    void Run();

  };
  //To be defined in Client
  Application* CreateApplication();
}
  


  