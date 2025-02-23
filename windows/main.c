#include <stdio.h>
#include <windows.h>  // for windows //


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "If you see this message, you should subscribe!", 
    "Message Box", MB_YESNOCANCEL | MB_ICONASTERISK | 
    MB_DEFBUTTON1 | MB_SYSTEMMODAL);
}