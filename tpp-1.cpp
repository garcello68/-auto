#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetProcessDPIAware();

    POINT p;
    while (true) {
        GetPhysicalCursorPos(&p);
        cout << "X: " << p.x << "  Y: " << p.y << "\r";
        Sleep(100);
    }
    return 0;
}

/////拿来直接用即可////