#include <iostream>
#include <limits>

using namespace std;

// Функция для выполнения арифметических операций
double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                return std::numeric_limits<double>::quiet_NaN();
            }
        default:
            cout << "Неверная операция!" << endl;
            return std::numeric_limits<double>::quiet_NaN();
    }
}

int main() {
    double num1, num2;
    char op;
    bool continue_calculating = true;

    while (continue_calculating) {
        // Ввод чисел
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите операцию (+, -, *, /): ";
        cin >> op;
        cout << "Введите второе число: ";
        cin >> num2;

        // Выполнение вычислений и вывод результата
        double result = calculate(num1, num2, op);
        if (!std::isnan(result)) {
            cout << "Результат: " << result << endl;
        }

        // Спрашиваем пользователя, хочет ли он продолжить
        char user_choice;
        cout << "Хотите продолжить? (y/n): ";
        cin >> user_choice;
        if (user_choice != 'y' && user_choice != 'Y') {
            continue_calculating = false;
        }
    }

    cout << "Программа завершена." << endl;
    return 0;
}
