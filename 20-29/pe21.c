#include <stdio.h>


int sum_divisors(int num){
    int sum = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(int argc, char* argv[]){
    int sum = 0, a_sum = 0, b_sum = 0;

    for(int i = 0; i < 10000; i++){
        a_sum = sum_divisors(i);
        b_sum = sum_divisors(a_sum);

        if(i == b_sum){
            if (i != a_sum){
                printf("%d and %d are amicable\n", i, a_sum);
                sum += i;
            }
        }
    }
    printf("amicable sum is = %d\n", sum);
    return 0;
}
