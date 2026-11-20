#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int age;

    cout << "Введите возраст: ";
    cin >> age;

    if (age < 5) {
        cout << "Бесплатно";
    } else if (age < 17) {
        cout << "250 рублей";
    } else if (age < 65) {
        cout << "500 рублей";
    } else {
        cout << "350 рублей";
    }

    return 0;
}

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int month;

    cout << "Введите номер месяца от 1 до 12: ";
    cin >> month;

    switch (month) {
        case 12:
        case 1:
        case 2:
            cout << "Зима";
            break;

        case 3:
        case 4:
        case 5:
            cout << "Весна";
            break;

        case 6:
        case 7:
        case 8:
            cout << "Лето";
            break;

        case 9:
        case 10:
        case 11:
            cout << "Осень";
            break;

        default:
            cout << "Такого месяца нет";
    }

    return 0;
}
