#include <stdio.h>


int main(void){

    unsigned long long grid[21][21];

    for (int i = 0; i < 21; i++) {
        // assign the edge paths to one
        grid[i][0] = 1;
        grid[0][i] = 1;
    }

    for (int i = 1; i < 21; i++) {
        for (int j = 1; j < 21; j++) {
            // add exterior path options to interior
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    printf("%llu\n", grid[20][20]);
    return 0;
}
