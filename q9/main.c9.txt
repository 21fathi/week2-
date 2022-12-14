#include <stdio.h>

int main() {
    int num,i=1,f=1;

    printf ("Enter the number:");
    scanf ("%d",&num);

    while (i<=num) {
        f = f * i;
        i++;
    }
    printf("%ld",f);


    return 0;
}
