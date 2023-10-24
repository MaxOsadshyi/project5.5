#include <iostream>
#include <vector>
using namespace std;
#include <Windows.h>


// Функція для обчислення кількості способів сплатити суму m за допомогою марок x, y, z
int countWays(int m, int x, int y, int z,vector<int>& memo) {
    if (m < 0) {
        return 0;  // Неможливо сплатити від'їзд з від'ємною вартістю
    }

    if (m == 0) {
        return 1;  // Існує лише один спосіб сплатити від'їзд нульовою вартістю - нічого не робити
    }

    if (memo[m] != -1) {
        return memo[m];  // Повертаємо результат з пам'яті, якщо він вже був обчислений
    }

    // Використовуємо рекурентне співвідношення для чисел Фібоначчі
    int ways = countWays(m - x, x, y, z, memo) +
        countWays(m - y, x, y, z, memo) +
        countWays(m - z, x, y, z, memo);

    memo[m] = ways;  // Зберігаємо результат в пам'яті
    return ways;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int m = 10;  // Вартість поштового відправлення
    int x = 1, y = 2, z = 3;  // Номінали марок

    std::vector<int> memo(m + 1, -1);  // Масив для зберігання результатів

    int ways = countWays(m, x, y, z, memo);
    std::cout << "Кількість способів сплатити " << m;

    return 0;
}
