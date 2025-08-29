#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T, CI;
    printf("Enter principal amount: ");
    scanf("%lf", &P);

    printf("Enter rate of interest: ");
    scanf("%lf", &R);

    printf("Enter time in years: ");
    scanf("%lf", &T);

    CI = P * pow(1 + R/100, T) - P;
    printf("Compound Interest = %.2lf\n", CI);

    return 0;
}

