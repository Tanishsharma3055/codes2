#include <stdio.h>

int main() {
    int n, k = 1;

    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Not Possible");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
          }
        printf("\n");
      }

    return 0;
 }
