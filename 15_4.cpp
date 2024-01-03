#include <stdio.h>
#include <locale.h>
int main() {
    // Оголошення масиву та змінних

    int array[10];
    setlocale(LC_ALL, "ukr");
    // Запит користувача для введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element [%d]: ", i);
        // Перевірка на введення цілого числа
        while (scanf_s("%d", &array[i]) != 1) {
            printf("Введіть коректне ціле число: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }
    }

    // Обчислення суми елементів
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += array[i];
    }

    // Виведення результату
    printf("Сума елементів масиву: %d\n", sum);

    return 0;
}

