#include "../Classes/AppDelegate.h"
#include "cocos2d.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>

USING_NS_CC;

int main(int argc, char **argv)
{
    // create the application instance
    AppDelegate app;
    EGLView* eglView = new EGLView();
    eglView->init("TestCPP",900,640);
    return Application::getInstance()->run();
}
