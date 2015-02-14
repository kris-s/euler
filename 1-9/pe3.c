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

    long i;
    long b = 600851475143;
    long ceiling = b/2;

    for(i = 1; i < ceiling; i++){
        if(i % 2 != 0 && b % i == 0){
            if(is_prime(i)){
                printf("%ld is a factor\n", i);
            }
        }
    }
    return 0;
}