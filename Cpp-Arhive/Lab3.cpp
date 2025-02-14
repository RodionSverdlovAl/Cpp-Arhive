﻿// Значение аргумента x изменяется от a до b с шагом h.Для каждого x
// найти значения функции Y(x), суммы S(x) и | Y(x)–S(x) | и вывести в виде
// таблицы.Значения a, b, h и n вводятся с клавиатуры.Так как значение S(x)
// является рядом разложения функции Y(x), значения S и Y для заданного
// аргумента x должны совпадать в целой части и в первых двух - четырех
// позициях после десятичной точки.
// Работу программы проверить для a = 0, 1; b = 1, 0; h = 0, 1; значение
// параметра n выбрать в зависимости от задания.

#include <iostream>
using namespace std;

int main()
{
    int n;
    double a, b, h, ak, S, Y;

    cout << "Enter a,b,h,n:\n";

    cout << "a=", cin >> a;
    cout << "b=", cin >> b;
    cout << "h=", cin >> h;
    cout << "n=", cin >> n;

    cout << " x     Y(x)       S(x)       |Y(x)-S(x)|\n";
    for (double x = a; x <= b + h / 2.; x += h)
    {
        S = 0;
        Y = ((1+(x*x))/2)*atan(x) - (x/2);
        for (int k = 1; k <= n; k++)
        {

            double A = pow(x, (2 * k) + 1);
            double B = (4 * k * k) - 1;

            ak = (A/B)*pow(-1,(k+1));
            S += ak;
        }
        cout << x << "   " << Y << "   " << S << "   " << fabs(Y - S) << "\n";
    }
}