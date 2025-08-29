#include <stdio.h>
int main() {
    float a1,b1,a2,b2;
    printf("Enter first number (real imag): ");
    scanf("%f %f",&a1,&b1);
    printf("Enter second number (real imag): ");
    scanf("%f %f",&a2,&b2);
    printf("Sum = %.2f + %.2fi\n", a1+a2, b1+b2);
    return 0;
}
