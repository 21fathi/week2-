#include <stdio.h>

int main() {
    int ID=123456,pass=45678; int i=1;
    printf("Enter the ID\n:");
    scanf("%d",&ID);
    if(ID==123456) {


        if (i <= 3) {
            printf("Enter password:\n");
            scanf("%d", &pass);
            if (pass == 45678) {
                printf("welcome");
            } else {
                printf("please repeat password");
                i = i++;
            }
            if (i <= 3) {
                printf("Enter password:\n");
                scanf("%d", &pass);
                if (pass == 45678) {
                    printf("welcome");
                } else {
                    printf("please repeat password");
                    i = i++;
                    if (i <= 3) {
                        printf("Enter password:\n");
                        scanf("%d", &pass);
                        if (pass == 45678) {
                            printf("welcome");
                        } else {
                            printf("please repeat password");
                            i = i++;
                            if (i <= 3) {
                                printf("Enter password:\n");
                                scanf("%d", &pass);
                                if (pass == 45678) {
                                    printf("welcome");
                                } else {
                                    printf("no more tries");
                                    i = i++;
                                }

                            }
                        }
                    }

                }
            }
            return 0;
        }
    }}