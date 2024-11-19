#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define _WIN32_WINNT 0x0500

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );  //won't hide the window without SW_MINIMIZE
    ShowWindow( hWnd, SW_HIDE );
	loop:
    system("reg delete HKCU\\System\\GameConfigStore\\Children /f");
    system("reg delete HKCU\\System\\GameConfigStore\\Parents /f");
    system("taskkill /f /im microsoftedgeupdate.exe");
    system("taskkill /f /im dllhost.exe");
    system("timeout /t 5");
	goto loop;
	return 0;
}

