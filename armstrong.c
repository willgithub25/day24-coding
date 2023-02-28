#include <stdio.h>
#include <stdlib.h>

int main() {
    int starting_value, end_value, number, digit, sum,cube,i,j;
    printf("Enter the starting_value: ");
    scanf("%d", &starting_value);
    printf("Enter the end_value: ");
    scanf("%d", &end_value);
    printf("Armstrong numbers are:\n");
    for( i = starting_value; i <= end_value; i++) {
        number = i;
        sum = 0;
        while(number !=0) {
            digit = number % 10;
            cube = 1;
            for(j = 1; j <= 3; j++) {
                cube =cube* digit;
            }
            sum += cube;
            number /= 10;
        }
        if(i == sum) {
            printf("%d\n", i);
        }
    }
    return 0;
}

