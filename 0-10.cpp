#include <iostream> 
#include <windows.h>
using namespace std;
int main()
{
    int number = 0;
    while (true) {
        cout << number << " ";
        number++;
        if (number > 10) {
            number = 0;
        }
    }
}
