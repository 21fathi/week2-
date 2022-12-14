#include <stdio.h>

int main() {
    int n, m, f;
    printf(" first number: \n");
    printf(" second number: \n");
    printf(" third number: \n");
    scanf("%d%d%d" , &n,&m,&f);

    if (n > m&& n>f) {
            printf("n is the maximum ");
        } else if(m>n && m>f){
            printf("m is the maximum");

        } else {
            printf("f is maximum");
        }

        return 0;
    }
