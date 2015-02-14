#include <stdio.h>

int main(void){

    int i = 1, j = 1;
    int sum_square = 0, square_sum = 0;
    printf("sum_square is %d\n", sum_square);
    for(i = 1; i < 101; i++){
        sum_square += (i * i);
    }

    for(j = 1; j < 101; j++){
        square_sum += j;
    }
    square_sum = square_sum * square_sum;

    printf("sum of squares is %d\n", sum_square);
    printf("square of sums is %d\n", square_sum);
    printf("difference is %d\n", square_sum - sum_square);
    return 0;
}