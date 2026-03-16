#include <stdio.h>
int main() {
    int row, space= 1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) {
        for (int space = 1; space <= row - i; space++)
            printf("  "); 

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                space = 1; 
            else
                space = space * (i - j + 1) / j; 
            
            printf("%4d", space); 
        }
       
        printf("\n");
    }
    return 0;
}
