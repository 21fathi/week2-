#include <stdio.h>

int main() {
    int n, m, f,k,j,h,u,i,o,p,sum;
    int aver;
    printf("number 1: \n");printf("number 2: \n");
    printf( "number 3: \n");printf("number 4: \n");
    printf("number 5: \n"); printf("number 6: \n");
    printf("number 7: \n");printf("number 8: \n");
    printf("number 9: \n");printf("number 10: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d",&n,&m,&f,&k,&j,&h,&u,&i,&o,&p,&sum);
    sum=n+m+f+k+j+h+u+i+o+p;
    printf( "%d\n" ,sum);
    aver=sum/10;
    printf ("%d\n",aver);
    return 0;
}
