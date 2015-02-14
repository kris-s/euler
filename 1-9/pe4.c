#include <stdio.h>

int is_pal(int num) {

    // this only works for numbers with 6 digits
    if((num % 10) == (num % 1000000 / 100000)){
        if((num % 100 / 10) == (num % 100000 / 10000)){
            if((num % 1000 / 100) == (num % 10000 / 1000)){
                printf("%d is a palindrome\n", num);
                return 1;
            }

        }
    }
    return 0;
}

int main(int argc, char* argv[]){

    int i, j, test;

    for(i = 999; i > 99; i--){
        for(j = 999; j > 99; j--){
            test = i * j;
            if(is_pal(test)){
                printf("i = %d, j = %d\n", i, j);
            }
        }
    }
}
