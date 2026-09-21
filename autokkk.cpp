#include <windows.h>
#include <iostream>
using namespace std;

void click(int x, int y) {
    cout << "准备点击：(" << x << ", " << y << ")" << endl;

    SetCursorPos(x, y);
    Sleep(100);

    POINT p;
    GetCursorPos(&p);
    cout << "实际位置：(" << p.x << ", " << p.y << ")" << endl;

    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);   
    Sleep(100);                                    
}

int main() {
    SetProcessDPIAware();

    cout << "3 秒后开始..." << endl;
    Sleep(3000);

    while (true) {
        click//在这里填你需要的坐标，格式为（ ， ）///
        Sleep(4000);  ////4000即四秒，四千毫秒////
    }
    return 0;
}


////配套程序有坐标抓取，即tpp-1.cpp/////