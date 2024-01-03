#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    do{
        printf("Enter n (n>=2): ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        if(buffer != 10 || number <= 2){
            printf("\nn must be >= 2, ");
        }
    }while(buffer != 10 || number < 2);
    printf("Prime numbers up to %d:", number);
    for(int i = 2; i <= number; i++){
        int isPrime = 1;
        for(int check = 2; check < i - 1; check++){
            if(i % check == 0){
                isPrime = 0;
                break;
            }
        }
    if(isPrime == 1){
        printf("%5d", i);
    }
    }
    return 0;
}
