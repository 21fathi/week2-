#include <stdio.h>

int main() {
    int n;
    int salary;
    printf ("Enter the numbers of hours\n");
    scanf("%d",&n);
    if(n>40){
        printf("%d",(50*n));
    }else{
        printf("%d",(45*n));
    }
    return 0;
}
