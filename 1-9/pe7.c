#include <stdio.h>

int is_prime(long num){

    if(num <= 3){
        return num > 1;
    } else if(num % 2 == 0 || num % 3 == 0) {
        return 0;
    } else {
        for (long i = 5; i * i <= num; i += 6){
            if(num % i == 0 || num % (i + 2) == 0) {
                return 0;
            }
        }
    return 1;
    }
}

int main(void){

    int i;
    int count = 0;

    for(i = 1; i < 1000000; i++){
        if(is_prime(i)){
            count++;
            if(count == 10001){
                printf("the 10001th prime is %d\n", i);
            }
        }
    }
}