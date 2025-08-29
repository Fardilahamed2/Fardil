
#include <stdio.h>
int main() {
    int n, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
}


}
    if(n <= 1) prime = 0;
    printf(prime ? "Prime\n" : "Not Prime\n");

    return 0;
}

