#include <iostream>
#include <cmath>
using namespace std;

double f(double x);

void main()
{
    setlocale(LC_ALL, "ru");

    int a;
    double x;

    cout << "¬ведите 1, если надо использовать константы. ¬ведите любое другое значение, если надо вводить значени€." << endl;
    cin >> a;
    if (a == 1)
    {
        x = 1;
        cout << f(x);
    }
    else
    {
        cout << "¬ведите значение x" << endl;
        cin >> x;
        cout << f(x);
    }
}