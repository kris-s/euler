#include <stdio.h>

int main(void) {
    
    char *nums = "0123456789";
    int count;
    for(int i = 0; i < 10; i++) {
     for(int j = 0; j < 10; j++) {
      for(int k = 0; k < 10; k++) {
       for(int l = 0; l < 10; l++) {
        for(int m = 0; m < 10; m++) {
         for(int n = 0; n < 10; n++) {
          for(int o = 0; o < 10; o++) {
           for(int p = 0; p < 10; p++) {
            for(int q = 0; q < 10; q++) {
             for(int r = 0; r < 10; r++) {
              if(i != j && i != k && i != l && i != m && i != n && i != o && i != p && i != q && i != r) {
              if(j != k && j != l && j != m && j != n && j != o && j != p && j != q && j != r){
              if(k != l && k != m && k != n && k != o && k != p && k != q && k != r){
              if(l != m && l != n && l != o && l != p && l != q && l != r){
              if(m != n && m != o && m != p && m != q && m != r){
              if(n != o && n != p && n != q && n != r){
              if(o != p && o != q && o != r){
              if(p != q && p != r){
              if(q != r){
                  if(count == 999999){
                      printf("%c%c%c%c%c%c%c%c%c%c\n", nums[i],
                                                       nums[j],
                                                       nums[k],
                                                       nums[l],
                                                       nums[m],
                                                       nums[n],
                                                       nums[o],
                                                       nums[p],
                                                       nums[q],
                                                       nums[r]);
                      printf("%dth permutation\n", count + 1);
                  }
                  count++;
              }
              }
              }
              }
              }
              }
              }
              }
              }
             }
            }
           }
          }
         }
        }
       }
      }
     }
    }
    return 0;
}