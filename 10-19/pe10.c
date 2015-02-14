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

int main(int argc, char* argv[]){
    
    long sum = 0;

    for(long i = 0; i < 2000000; i++) {
        if(is_prime(i)){
            sum += i;
        }
    }
    printf("%ld\n", sum);
    return 0;
}