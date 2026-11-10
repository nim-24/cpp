#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a;
    int b;
    int c;
    cin >> a>>b;
    if (a > b)
        cout << a;
    else
        cout << b;

    cin >> c;
    if (c < 100 && c>0)
        cout c;

   
}
