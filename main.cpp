#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int months = 12;
    double prybytok[months];
    std::string monthNames[] = { "Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень", "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень" };

    
    for (int i = 0; i < months; i++) {
        std::cout << "Введіть прибуток за " << monthNames[i] << ": ";
        std::cin >> prybytok[i];
    }

   
    double maxPrybytok = prybytok[0];
    double minPrybytok = prybytok[0];
    int maxMonth = 0;
    int minMonth = 0;

    for (int i = 1; i < months; i++) {
        if (prybytok[i] > maxPrybytok) {
            maxPrybytok = prybytok[i];
            maxMonth = i;
        }
        if (prybytok[i] < minPrybytok) {
            minPrybytok = prybytok[i];
            minMonth = i;
        }
    }

   
    std::cout << "Місяць з максимальним прибутком: " << monthNames[maxMonth] << " (" << maxPrybytok << ")\n";
    std::cout << "Місяць з мінімальним прибутком: " << monthNames[minMonth] << " (" << minPrybytok << ")\n";

    return 0;
}
