#include <stdio.h>

int main() {
    int n;
    printf("Enter your grade\n");
    scanf("%d",&n);
    if(n>=127) {
        printf("Excellent");
    } else if(n>=112) {
        printf("very good");
    }else if(n >=95) {
        printf("good");
    }else if(n>=70){
        printf ("bad");
    }else {
        printf("failed");
    }
}
