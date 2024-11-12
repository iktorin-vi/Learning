#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(static_cast<unsigned int>(time(nullptr))); // Ініціалізація генератора випадкових чисел
    int secretNumber = rand() % 100 + 1; // Випадкове число від 1 до 100
    int guess;
    int attempts = 0;

    cout << "Гра: Вгадай число від 1 до 100!" << endl;

    // Головний цикл гри
    while (true) {
        cout << "Введіть вашу відповідь: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Вітаємо! Ви вгадали число за " << attempts << " спроб." << endl;
            break;
        }
        else if (guess < secretNumber) {
            cout << "Загадане число більше. Спробуйте ще раз." << endl;
        }
        else {
            cout << "Загадане число менше. Спробуйте ще раз." << endl;
        }
    }

    cout << "Дякуємо за гру!" << endl;
    return 0;
}sss