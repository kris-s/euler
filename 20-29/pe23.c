#include <stdio.h>
#define MAX 28123


int abundant_numbers[MAX] = {0};

int sum_divisors(int num){
    int sum = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}


int is_abundant(int num){

    if(num < sum_divisors(num)){
        return 1;
    } else {
        return 0;
    }
}


int is_summable(int num){

    // inefficently check every possible combination
    for(int i = 1; i < num; i++){
        for(int j = 1; j < num; j++){
            if(abundant_numbers[i] != 0 && abundant_numbers[j] != 0){
                if(abundant_numbers[i] + abundant_numbers[j] == num){
                    return 1;
                }
            }
        }
    }
    return 0;
}


int main(void){

    int sum = 0;


    // build list of abundant_numbers
    for(int i = 1; i < MAX; i++){
        if(is_abundant(i)){
            abundant_numbers[i] = i;
        }
    }

    for(int i = 1; i < MAX; i++){
        if(!is_summable(i)){
            sum += i;
        }
    }

    printf("sum = %d\n", sum);
    return 0;
}
