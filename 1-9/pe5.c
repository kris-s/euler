#include <stdio.h>

int check_divisors(int num){
    int i;
    for(i = 2; i < 21; i++){
        if(num % i != 0){
            return 1;
        }
    }
    printf("smallest multiple is %d\n", num);
    return 0;
}

int main(int argc, char* argv[]){

    int searching = 1;
    int i = 20;
    while(searching) {
        searching = check_divisors(i);
        i++;
    }
    return 0;
}
