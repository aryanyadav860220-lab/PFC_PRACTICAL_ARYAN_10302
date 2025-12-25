// ARYAN YADAV
// ERP 10302
#include <stdio.h>
int main() {
    int n=10, sum=0;
    for(int i=1; i<=n; i++) {
        if(i % 2 != 0) continue;
        sum += i;
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}

/* OUTPUT:
Sum of even numbers = 30
*/
