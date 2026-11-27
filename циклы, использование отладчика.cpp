#include <iostream> 
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 
    int u;
    cout<<"введите длину" <<endl;
    cin>>u;
    int e;
    cout<<"введите ширину"<<endl;
    cin>>e;

    for (int i = 0; i < u; i++) 
    {
        for (int r = 0; r < e; r++) {
            cout << r << " ";
        }
        cout << endl;
    }
}
