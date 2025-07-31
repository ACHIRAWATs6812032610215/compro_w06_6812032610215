#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;
    int r1, r2;
    float r3, r4;

    r1 = a++ * b + (int)y % 3;  // a=5 used, a becomes 6 after, 5*2=10, (int)4.5=4 → 4%3=1 → 10+1=11
    r2 = (a > b) && ((int)x / b < 2); // a=6 > 2 = 1, x=3.0 → 3/2 = 1, 1 < 2 = 1 → 1 && 1 = 1
    r3 = ++x * y - a / 2;  // ++x = 4.0, a=6 → 4.0*4.5=18.0, 6/2=3 → 18.0 - 3 = 15.0
    r4 = ((x += 1.5) > y) || (b-- > 0);  // x=4.0+1.5 = 5.5 > 4.5 = 1 → short-circuit: r4 = 1

    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %.2f\n", r3);
    printf("r4 = %.2f\n", r4);

    return 0;
}