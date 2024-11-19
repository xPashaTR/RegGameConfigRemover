#include <stdio.h>

int main() {
    system(":loop");
    system("reg delete HKCU\System\GameConfigStore\Children /f");
    system("reg delete HKCU\System\GameConfigStore\Parents /f");
    system("timeout /t 5");
    system("goto loop");
}