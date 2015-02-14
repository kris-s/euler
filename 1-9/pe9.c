#include <stdio.h>

int main(int argc, char* argv[]){

    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            for(int k = 0; k < 1000; k++){
                if(( (i*i) + (j*j) ) == (k*k)){
                    if((i + j + k) == 1000){
                        printf("%d, %d, %d, \n", i, j, k);
                        printf("%d\n", i*j*k);
                    }
                }
            }
        }
    }
    return 0;
}