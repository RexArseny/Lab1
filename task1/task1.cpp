#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    setlocale(LC_ALL,"ru");

    const int pi = 3.14;
    int a;
    double x, f;

    cout << "Введите 1, если надо использовать константы. Введите любое другое значение, если надо вводить значения." << endl;
    cin >> a;
    if (a == 1)
    {
        x = 1;
        f = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
        cout << f;
    }
    else
    {
        cout << "Введите значение x" << endl;
        cin >> x;
        f = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
        cout << f;
    }
}