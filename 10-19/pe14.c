#include <stdio.h>

long get_chain_length(long start){

    long length = 1, collatz = start;

    while(collatz != 1){
        if(collatz % 2 == 0){
            collatz = collatz / 2;
        } else {
            collatz = (collatz * 3) + 1;
        }
        length++;
    }
    return length;
}


int main(void){

    long guess = 1, chain = 0, temp = 0, max = 0;

    for(long i = 1; i < 1000000; i++){
        temp = get_chain_length(i);
        if(temp > max){
            chain = i;
            max = temp;
        }
    }
    printf("%ld has a chain length of %ld\n", chain, max);
    return 0;
}