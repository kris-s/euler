#include <stdio.h>


long nums[30] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4,
                 3, 6, 6, 8, 8, 7, 7, 9, 8, 8,
                 6, 6, 5, 5, 5, 7, 6, 6, 7, 8};


long count_two_digit(int num){

    long sum = 0;

    sum += nums[num % 10];
    sum += nums[18 + ((num - (num % 10)) / 10)];

    return sum;
}

long count_three_digit(int num){

    long sum = nums[28];

    if(num % 100 == 0){
        ;
    }
    else if(num % 100 < 21){
        sum += nums[num % 100];
        sum += 3;
    } else {
        sum += count_two_digit(num % 100);
        sum += 3;
    }
    sum += nums[(num - (num % 100))/100];

    return sum;
}

long count_characters(int num){

    long sum = 0;

    if(num == 1000){
        sum = 11;
    } else if(num > 99){
        sum = count_three_digit(num);
    } else if(num > 20){
        sum = count_two_digit(num);
    } else {
        sum = nums[num];
    }

    return sum;
}

int main(void){

    long sum = 0;

    for(int i = 1; i < 1001; i++){
        sum += count_characters(i);
    }

    printf("%ld\n", sum);
    return 0;
}