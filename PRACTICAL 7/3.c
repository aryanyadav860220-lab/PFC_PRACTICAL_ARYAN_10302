// ARYAN YADAV
// ERP 10302
#include <stdio.h>
int main() {
    int n=4;
    for(int i=1;i<=n;i++){
        for(char ch='A'; ch<'A'+i; ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

/* OUTPUT:
A
AB
ABC
ABCD
*/