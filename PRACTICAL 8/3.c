// ARYAN YADAV
// ERP 10302
#include <stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/* OUTPUT for n=4:
*
**
***
****
*/