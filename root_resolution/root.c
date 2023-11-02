#include <stdio.h>
#include <math.h>
#define PI 3.14

float function(float x) {
    return sin(x);
}

float root(float (*func)(float), float a, float b, float epsilon) {
    float eps = fabs(a - b);
    while (func(a) * func(b) < 0 && eps > epsilon) {
        if (func(a) * func((a + b) / 2) < 0) {
            b = (a + b) / 2;
        }
        else {
            a = (a + b) / 2;
        }
        eps = fabs(a - b);
    }
    return a;
}

int main() {

    float a = -PI / 4;
    float b = PI / 4;
    printf("the root of l'equation sin(x) = 0 is %f", root(function, a, b, 0.0000001));
}
