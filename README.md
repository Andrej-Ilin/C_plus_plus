# Калькулятор на C++

## Описание

Этот калькулятор выполняет базовые арифметические операции, такие как сложение, вычитание, умножение и деление. Программа позволяет пользователю ввести два числа и выбрать операцию для выполнения. Программа продолжает работать, пока пользователь не решит завершить её.

## Как использовать

1. Скомпилируйте программу с помощью компилятора C++. Например, используя g++:
   ```
   g++ -o calculator calculator.cpp
   ```

2. Запустите программу:
   ```
   ./calculator
   ```

3. Программа попросит вас ввести два числа и выбрать операцию. Поддерживаются следующие операции:
   - Сложение: `+`
   - Вычитание: `-`
   - Умножение: `*`
   - Деление: `/`

4. После выполнения операции программа выведет результат и предложит продолжить или завершить выполнение.

## Пример работы программы

```
Введите первое число: 12
Введите операцию (+, -, *, /): +
Введите второе число: 8
Результат: 20
Хотите продолжить? (y/n): y

Введите первое число: 20
Введите операцию (+, -, *, /): /
Введите второе число: 4
Результат: 5
Хотите продолжить? (y/n): n

Программа завершена.
```

## Возможности

- Базовые арифметические операции: сложение, вычитание, умножение, деление.
- Обработка деления на ноль с выводом ошибки.
- Возможность продолжать вычисления после каждого ввода.

## Технические детали

- Программа использует стандартные библиотеки C++: `iostream` для ввода и вывода, а также `limits` для проверки ошибок деления на ноль.
- Программа позволяет пользователю многократно выполнять вычисления, пока он не решит завершить программу.

---

### Советы для улучшения:
- Добавить возможность обработки ошибок ввода (например, когда пользователь вводит не число).
- Расширить функциональность, добавив поддержку более сложных математических операций, таких как возведение в степень, вычисление квадратного корня и т.д.


