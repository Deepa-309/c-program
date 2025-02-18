 /*#include <stdio.h>
 int main() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
                if(i<=j){
            printf("*");
    }
    else{
        printf(" ");
    }
        }
        printf("\n");
        }
        return 0;}
*/
 #include <stdio.h>
 int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }
