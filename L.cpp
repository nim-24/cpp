#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Введите слово: ";
    cin >> word;
    for (char letter : word) {
        cout << letter << "л";
    }
    cout << endl;
    return 0;
}
