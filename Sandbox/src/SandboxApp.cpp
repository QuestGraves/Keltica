#include "Keltica.h"




  class Sandbox : public Keltica::Application
  {
  public:
    Sandbox()
    {

    }
    ~Sandbox()
    {

    }
  };
  
  Keltica::Application* Keltica::CreateApplication()
  {
    return new Sandbox();
  }