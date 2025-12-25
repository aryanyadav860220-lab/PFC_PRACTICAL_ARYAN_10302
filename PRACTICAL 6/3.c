// ARYAN YADAV
// ERP 10302
#include <stdio.h>
int main() {
    int pin, attempt=0, correctPin=1234;
    while(attempt<3) {
        printf("Enter ATM Pin: ");
        scanf("%d", &pin);
        if(pin==correctPin) {
            printf("Access Granted!\n");
            return 0;
        } else {
            printf("Incorrect Pin. Try again.\n");
        }
        attempt++;
    }
    printf("Card Blocked!\n");
    return 0;
}

/* SAMPLE OUTPUT (if user enters 1234 on 2nd attempt):
Enter ATM Pin: 1111
Incorrect Pin. Try again.
Enter ATM Pin: 1234
Access Granted!
*/