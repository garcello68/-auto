# -auto
这是一个用于学习 Windows API 鼠标控制的 C++ 示例，仅用于合法的自动化测试场景，请勿用于任何违反平台规则或法律法规的行为。
//////////////////////////////////////////////////
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
////////////////////////////////////////////
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
