#include <stdio.h>


int tri[15][15] = {{75},
                   {95, 64},
                   {17, 47, 82},
                   {18, 35, 87, 10},
                   {20, 4, 82, 47, 65},
                   {19, 1, 23, 75, 3, 34},
                   {88, 2, 77, 73, 7, 63, 67},
                   {99, 65, 4, 28, 6, 16, 70, 92},
                   {41, 41, 26, 56, 83, 40, 80, 70, 33},
                   {41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
                   {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
                   {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
                   {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
                   {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
                   {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}};


int look_ahead(int level, int pos){

    int ll = tri[level+1][pos] + tri[level+2][pos];
    int lr = tri[level+1][pos] + tri[level+2][pos+1];
    int rl = tri[level+1][pos+1] + tri[level+2][pos+1];
    int rr = tri[level+1][pos+1] + tri[level+2][pos+2];

    if(ll + lr > rl + rr){
        return 0;
    }
    return 1;
}


int main(int argc, char* argv[]){

    int sum = 0;
    int choice = 0;

    for(int i = 0; i < 15; i++){
        sum += tri[i][choice];
        choice += look_ahead(i, choice);
    }

    printf("sum = %d\n", sum);
    return 0;
}

