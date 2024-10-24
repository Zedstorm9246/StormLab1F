#include <stdio.h>
int main() {
    int i, j, stnum, ednum;
    int primecount = 0;
    int prime[100];

    printf("Enter starting number: ");
    scanf("%d", &stnum);
    printf("Enter ending number: ");
    scanf("%d", &ednum);

    for (i = stnum; i <= ednum; i++) {
        if (i < 2) continue; 
        int is_prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            prime[primecount] = i;
            primecount++; 
        }
    }

    printf("Prime numbers between %d and %d are:\n", stnum, ednum);
    for (i = 0; i < primecount; i++) {
        printf("%d\n", prime[i]);
    }

    return 0;
}
