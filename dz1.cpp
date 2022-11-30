// dz1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

class Calculator
{
private:
    double num1 = 0;
    double num2 = 0;

public:
    double add()
    {
        return (this->num1 + this->num2);
    }

    double multiply()
    {
        return (this->num1 * this->num2);
    }

    double subtract_1_2()
    {
        return (this->num1 - this->num2);
    }

    double subtract_2_1()
    {
        return (this->num2 - this->num1);
    }

    double divide_1_2()
    {
        return (this->num1 / this->num2);
    }

    double divide_2_1()
    {
        return (this->num2 / this->num1);
    }

    bool set_num1(double num1)
    {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2)
    {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Calculator calc;

    double num1 = 0;
    double num2 = 0;
    std::cout << "Введите num1: ";
    std::cin >> num1;
    while(!calc.set_num1(num1)) {
        std::cout << "Неверный ввод!\n";
        std::cout << "Введите num1: ";
        std::cin >> num1;
    }

    std::cout << "Введите num2: ";
    std::cin >> num2;
    while (!calc.set_num2(num2)) {
        std::cout << "Неверный ввод!\n";
        std::cout << "Введите num2: ";
        std::cin >> num2;
    }
    std::cout << "num1 + num2 = " << calc.add() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
    std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
    std::cout << "num1 * num2 = " << calc.multiply() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
}