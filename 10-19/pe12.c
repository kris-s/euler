#include <stdio.h>
#include <math.h>

unsigned long long get_triangle(unsigned long long count){

    unsigned long long triangle = 0;
    triangle = ((count * (count + 1)) / 2);

    return triangle;
}


int count_divisors(unsigned long long triangle){

    int divisors = 0;
    double upper = sqrt(triangle);
    for(unsigned long long i = 1; i < upper; i++){
        if(triangle % i == 0){
            divisors+=2;
        }
    }
    return divisors;
}


int main(void){

    unsigned long long triangle = 1, count = 1;
    int divisors = 0, temp = 0;

    while(divisors < 501){
        triangle = get_triangle(count);
        temp = count_divisors(triangle);
        if(temp > divisors){
            divisors = temp;
            printf("%llu has %d divisors\n", triangle, divisors);
        }
        count++;
    }
    return 0;
}
