// ARYAN YADAV
// ERP 10302
#include <stdio.h>
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    int num=4123;
    printf("Sum of digits = %d\n", sumOfDigits(num));
    return 0;
}

/* OUTPUT:
Sum of digits = 10
*/