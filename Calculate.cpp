#include <iostream>
#include <locale.h>
#include <cmath>
#define PI 3.14159265
using namespace std;

class calc
{
public: void start()
{
    char tip;
    cout << "Выберите тип калькулятора: " << endl << endl;
    cout << "1 - инженерный " << endl;
    cout << "2 - обычный " << endl << endl;

    cin >> tip;

    if (tip == '1')
    {
        calc math;
        math.math_calc();
    }
    else if (tip == '2')
    {
        calc math;
        math.calculate();
    }
    else
    {
        cout << "\nError 404! Not Found!" << endl;
        cout << "Ошибка выбора пункта меню!" << endl << endl;
        cout << "Перезагрузка программы..." << endl;

        start();
    }

}

public: void math_calc()

{
    double count1;
    double count2;
    int choise;
    cout << "\nВыберите метод вычислений: " << endl << endl;
    cout << "1. Вычисление синуса" << endl;
    cout << "2. Вычисление косинуса" << endl;
    cout << "3. Вычисление тангенса" << endl;
    cout << "4. Вычисление котангенса" << endl;
    cout << "5. Вычисление арксинуса" << endl;
    cout << "6. Вычисление арккосинуса" << endl;
    cout << "7. Вычисление арктангенса" << endl;
    cout << "8. Вычисление квадратного корня" << endl;
    cout << "9. Вычисление кубического корня" << endl;
    cout << "10. Вычисление абсолютного значения(модуля)" << endl;
    cout << "11. Возведение в степень" << endl << endl;
    cout << "0. Предыдущее меню" << endl << endl;

    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nСинус " << count1 << " Равен: " << sin(count1) << endl;

        start();

    case 2:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nКосинус " << count1 << " Равен: " << cos(count1) << endl;

        start();

    case 3:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nТангенс " << count1 << " Равен: " << tan(count1) << endl;

        start();

    case 4:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nКотангенс " << count1 << " Равен: " << cos(count1) / sin(count1) << endl;

        start();

    case 5:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nАрксинус " << count1 << " Равен: " << (asin(count1) * 180.0 / PI) << endl;

        start();

    case 6:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nАрккосинус " << count1 << " Равен: " << (acos(count1) * 180.0 / PI) << endl;

        start();

    case 7:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nАрктангенс " << count1 << " Равен: " << (atan(count1) * 180.0 / PI) << endl;

        start();

    case 8:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nКвадратный корень " << count1 << " Равен: " << sqrt(count1) << endl;

        start();

    case 9:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nКубический корень " << count1 << " Равен: " << cbrt(count1) << endl;

        start();

    case 10:
        cout << "\nВведите значение: " << endl << endl;
        cin >> count1;
        cout << "\nМодуль " << "[" << count1 << "]" << " Равен: " << abs(count1) << endl;

        start();

    case 11:
        cout << "\nВведите число:\n" << endl;
        cin >> count1;
        cout << "\n";
        cout << "\nВведите степень:\n" << endl;
        cin >> count2;
        cout << "\n";
        cout << count1 << " в степени " << count2 << " равняется: " << pow(count1, count2) << endl << endl;

        start();

    case 0:

        start();

    default:

        cout << "\nError 404! Not Found!" << endl;
        cout << "Ошибка выбора пункта меню!" << endl << endl;
        cout << "Перезагрузка программы..." << endl;

        start();
    }


}

public: void calculate()
{
    char question;
    long long count1;
    long long count2;
    char operand;

    cout << "\nДанный модуль работает в режиме А (оператор) В" << endl;
    cout << "\nВведите А: " << endl << endl;
    cin >> count1;
    cout << "\nВведите В: " << endl << endl;
    cin >> count2;
    cout << "\nВыберите оператор: " << endl;
    cout << "+ - Сложение" << endl;
    cout << "- - Вычитание" << endl;
    cout << "* - Умножение" << endl;
    cout << "/ - Деление" << endl;
    cout << "% - Остаток от деления" << endl << endl;
    cout << "0 - Возврат в главное меню" << endl << endl;

    cin >> operand;

    switch (operand)
    {
    case '+':

        cout << "\nОтвет: " << count1 + count2 << endl << endl;

        start();

    case '-':

        cout << "\nОтвет: " << count1 - count2 << endl << endl;

        start();


    case '*':

        cout << "\nОтвет: " << count1 * count2 << endl << endl;

        start();

    case '/':

        cout << "\nОтвет: " << count1 / count2 << endl << endl;

        start();

    case '%':
    {
        int count3 = count1;
        int count4 = count2;
        cout << "\nОтвет : " << count3 % count4 << endl << endl;

        start();
    }
    case '0':
        cout << "Возврат в главное меню" << endl << endl;
        start();

    default:

        cout << "\nError 404! Not Found!" << endl;
        cout << "Ошибка выбора пункта меню!" << endl << endl;
        cout << "Перезагрузка программы..." << endl;

        start();

    }

    cout << "\nПродолжить вычисления? Y/N" << endl << endl;
    cin >> question;
    if (question == 'Y' || question == 'y')
    {
        start();
        cout << endl;
    }
    else if (question == 'N' || question == 'n')
    {
        cout << "Завершение программы!" << endl;
    }
    else
    {
        cout << "\nError 404! Not Found!" << endl;
        cout << "Ответ не найден!" << endl;
        cout << "Завершение программы!" << endl;

    }
}

};

int main()
{
    setlocale(LC_ALL, "Russian");

    calc a;
    a.start();

    return 0;
}