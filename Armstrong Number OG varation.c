#include <stdio.h>
int main () {
    int a, b, n, i, last, prod, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    b = a = n;

    while (n!=0) {
        n = n/10;
        count++;
    }
    
    while (a!=0) {
        last = a%10;
        a = a/10;
    
    prod = 1;
    for (i=1; i<=count; i++) {
        prod = prod*last;
        sum = sum + prod;
    }

    if (sum == b) {
        printf("%d is an Armstrong number.", b);
    }
    else {
        printf("%d is not an Armstrong number.", b);
    }
 return 0;       
}
}
