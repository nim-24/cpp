#include <iostream> 
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 
    for (int number = 1; number <= 10000; number++) 
    {
        int divisors = 0;
        for (int divisor = 2; divisor < number; divisor++) 
        {
            if (number % divisor == 0) {
                divisors++;
            }
        }
        if (divisors == 3) {
            cout << number << " ";
        }
    }
}
