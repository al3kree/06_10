#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number");
    scanf("%d", &number);

    if (number>0) {
        printf("The number is positive\n");
        printf("Exit programm...\n");
        return 0;
    }

    else if (number<0) {
        printf("The number is negative\n");
        printf("Exit programm...\n");
        return 0;
    }

    else if (number ==0) {
        printf("The number is zero\n");
        printf("Exit programm...\n");
        return 0;
    }

    else {
        printf("Exit programm...\n");
        return 0;
    }
    
}