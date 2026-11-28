#include <iostream> 
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 
    int massiv1[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) 
    {
        cout << massiv1[i] << ' ';
    }

    int massiv2[5];
    for (int i = 0; i < 5; i++) 
    {
        cin >> massiv2[i];
        cout << massiv2[i]<<endl;
    }
}
