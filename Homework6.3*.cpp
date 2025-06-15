#include <iostream>
#include <vector>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    int count;
    std::cout << "Введите число: ";
    std::cin >> count;

    std::vector<unsigned long long> fibNum(count);

    if (count > 0) fibNum[0] = 0;
    if (count > 1) fibNum[1] = 1;

    for (int i = 2; i < count; i++) 
    {
        fibNum[i] = fibNum[i - 1] + fibNum[i - 2];
    }

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; i++) 
    {
        std::cout << fibNum[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
