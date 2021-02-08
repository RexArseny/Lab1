#include <iostream>
using namespace std;

double x, rezult;

void f();

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