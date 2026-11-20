#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Введите число от 1 до 7: ";
    cin >> day;

    switch (day) {
        case 1: 
          cout << "Понедельник"; 
          break;
        case 2: 
          cout << "Вторник"; 
          break;
        case 3: 
          cout << "Среда"; 
          break;
        case 4: 
          cout << "Четверг"; 
          break;
        case 5: 
          cout << "Пятница"; 
          break;
        case 6: 
          cout << "Суббота"; 
          break;
        case 7: 
          cout << "Воскресенье"; 
          break;
        default: 
          cout << "Такого дня нет"; 
          break;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Меню ресторана"<< endl;
    cout << "1 — Пицца" << endl;
    cout << "2 — Суп" << endl;
    cout << "3 — Салат"<< endl;
    cout << "Введите номер блюда: ";
    cin >> choice;

    switch (choice) {
        case 1: 
          cout << "Вы выбрали пиццу"; 
          break;
        case 2: 
          cout << "Вы выбрали суп"; 
          break;
        case 3: 
          cout << "Вы выбрали салат"; 
          break;
        default: 
          cout << "Такого блюда нет"; 
          break;
    }

    return 0;
}
