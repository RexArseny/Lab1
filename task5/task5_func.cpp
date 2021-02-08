#include <cmath>

double f(double x)
{
    const int pi = 3.14;
    return sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
}