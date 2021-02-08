#include <cmath>
#include "func.h"

double x, rezult;

void f()
{
    const int pi = 3.14;
    rezult = sin(pi / 2 + 3 * x) / (1 - sin(3 * x - pi));
}