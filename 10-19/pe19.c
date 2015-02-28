#include <stdio.h>


int main(int argc, char* argv[]){

    int sum = 0, year = 1901, month = 0, day = 2; // 1901 starts on Tuesday
    int leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int norm[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(year < 2001){
        if(year % 4 == 0){
            for(int i = 0; i < 12; i++){
                month = leap[i];
                day += month;
                if(day % 7 == 0){
                    sum++;
                }
            }
        } else {
            for(int i = 0; i < 12; i++){
                month = norm[i];
                day += month;
                if(day % 7 == 0){
                    sum++;
                }
            }
        }
        year++;
    }
    printf("20th Century first-of-the-month Sundays = %d\n", sum);
    return 0;
}
