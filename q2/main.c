#include <stdio.h>

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    if (n%2==0){
        printf ("number is even");
    }else{
        printf ("number is odd");
    }
    return 0;
}
