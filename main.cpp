#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int months = 12;
    double prybytok[months];
    std::string monthNames[] = { "ѳ����", "�����", "��������", "������", "�������", "�������", "������", "�������", "��������", "�������", "��������", "�������" };

    
    for (int i = 0; i < months; i++) {
        std::cout << "������ �������� �� " << monthNames[i] << ": ";
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

   
    std::cout << "̳���� � ������������ ���������: " << monthNames[maxMonth] << " (" << maxPrybytok << ")\n";
    std::cout << "̳���� � ��������� ���������: " << monthNames[minMonth] << " (" << minPrybytok << ")\n";

    return 0;
}
