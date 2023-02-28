#include <stdio.h>
#include <stdlib.h>

int main() {
    int starting_value, end_value, count = 0, prime_number;
    printf("Enter the starting value: ");
    scanf("%d", &starting_value);
    printf("Enter the end value: ");
    scanf("%d", &end_value);
    for(int i = starting_value; i <= end_value; i++) {
        prime_number= 1;
        for(int j = 2; j <= i/2; j++) {
            if(i%j == 0) {
                prime_number = 0;
                break;
            }
        }
        if(prime_number==1) {
            count++;
        }
    }
    printf("There are %d prime numbers .", count);
    return 0;
}
