#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int price1 = 212;
    int price2 = 868;
    int price3 = 4095;
    int price4 = 9090;
    int price5 = 53085;
    int balance = 0;
    int product;
    double discount;


    int year;
    string year4;
    cin >> year;
    year4 = (year % 4 == 0) ? "YES" : "NO";
    cout << year4 << endl;


    string operation;
    cout << "Какую операцию вы бы хотели совершить? (депозит, внесение, вывод, инфо)" << endl;
    cin >> operation;

    if (operation == "депозит") {
        cin >> balance;
        cout << balance << endl;
    }
    else if (operation == "внесение") {
        int plus;
        cin >> plus;
        balance += plus;
        cout << balance << endl;
    }
    else if (operation == "вывод") {
        int minus;
        cin >> minus;
        balance -= minus;
        cout << balance << endl;
    }
    else if (operation == "инфо") {
        cout << balance << endl;
    }
    else {
        cout << "такой операции нет!" << endl;
    }

    cout << "введите номер товара: " << endl;
    cin >> product;

    switch (product)
    {

        case 1:
        if (balance >= price1)
        {
            discount = (price1 <= 1000) ? price1 * 0.05 : (price1 <= 5000) ? price1 * 0.10 : (price1 <= 100000) ? price1 * 0.25 : 0;
            cout << "размер скидки: " << discount << endl;
        }
        else
        {
            cout << "недостаточно средств!" << endl;
        }
        break;
        case 2:
        if (balance >= price2)
        {
            discount = (price2 <= 1000) ? price2 * 0.05 : (price2 <= 5000) ? price2 * 0.10 : (price2 <= 100000) ? price2 * 0.25 : 0;
            cout << "размер скидки: " << discount << endl;
        }
        else
        {
            cout << "недостаточно средств!" << endl;
        }
        break;
        case 3:
        if (balance >= price3)
        {
            discount = (price3 <= 1000) ? price3 * 0.05 : (price3 <= 5000) ? price3 * 0.10 : (price3 <= 100000) ? price3 * 0.25 : 0;
            cout << "размер скидки: " << discount << endl;
        }
        else
        {
            cout << "недостаточно средств!" << endl;
        }
        break;
        case 4:
        if (balance >= price4)
        {
            discount = (price4 <= 1000) ? price4 * 0.05 : (price4 <= 5000) ? price4 * 0.10 : (price4 <= 100000) ? price4 * 0.25 : 0;
            cout << "размер скидки: " << discount << endl;
        }
        else
        {
            cout << "недостаточно средств!" << endl;
        }
        break;
        case 5:
        if (balance >= price5)
        {
            discount = (price5 <= 1000) ? price5 * 0.05 : (price5 <= 5000) ? price5 * 0.10 : (price5 <= 100000) ? price5 * 0.25 : 0;
            cout << "размер скидки: " << discount << endl;
        }
        else
        {
            cout << "недостаточно средств!" << endl;
        }
        break;
        default:
            break;
    }

   
}
