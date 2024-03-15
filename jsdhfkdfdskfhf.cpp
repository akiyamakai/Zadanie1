#include <iostream>

int main() {
    const int SIZE = 5; // Розмір масиву
    int arr[SIZE] = { 1, 2, 3, 4, 5 }; // Заданий масив

    int sum = 0; // Змінна для збереження суми

    // Обчислюємо суму всіх елементів масиву
    for (int i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }

    // Виводимо результат
    std::cout << "The sum of array elements: " << sum << std::endl;

    return 0;
}
