#include <iostream>
#include "CApp.h"

CApp::CApp(){
  Running = true;
}

int CApp::OnExecute(){
  if(OnInit() == false){
    return -1;
  }

  SDL_Event Event;

  while(Running) {
    while(SDL_PollEvent(&Event)){
      OnEvent(&Event);
    }

      OnLoop();
      OnRender();
  }

  return 0;
}

int main(int argc, char *argv[]){
  std::cout << "hey" << std::endl;
  CApp theApp;

  return theApp.OnExecute();
}
