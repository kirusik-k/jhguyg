#include <iostream>
#include <cstdlib>   // Для rand() и srand()
#include <ctime>     // Для time()
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Для корректного отображения русского текста

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1; // Случайное число от 1 до 100

    int guess;
    int attempts = 0;

    cout << "Добро пожаловать в игру 'Угадай число'!" << endl;
    cout << "Я загадал число от 1 до 100. Попробуйте угадать его." << endl;

    do {
        cout << "Введите вашу догадку: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Загаданное число больше." << endl;
        } else if (guess > secretNumber) {
            cout << "Загаданное число меньше." << endl;
        } else {
            cout << "Поздравляю! Вы угадали число за " << attempts << " попыток." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
