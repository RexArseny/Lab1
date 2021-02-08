#include <iostream>
#include <cmath>
using namespace std;

double x, rezult;

void main()
{
    setlocale(LC_ALL, "ru");

    int a;

    cout << "¬ведите 1, если надо использовать константы. ¬ведите любое другое значение, если надо вводить значени€." << endl;
    cin >> a;
    if (a == 1)
    {
        x = 1;
        cout << rezult;
    }
    else
    {
        cout << "¬ведите значение x" << endl;
        cin >> x;
        cout << rezult;
    }
}

void f()
{
    const int pi = 3.14;
    rezult = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
}