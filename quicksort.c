// Link- https://www.hackerrank.com/challenges/quicksort1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void partition(int ar_size, int *  ar) {
    int p = ar[0];
    int bi = 1;
    int pc = 1;
    for (int i = 1; i < ar_size; ++i) {
        int a = ar[i];
        if (a < p) printf("%d ", a);
        else if (a > p) ar[bi++] = ar[i];
        else pc++;
    }
    while (pc > 1) {
        printf("%d ", p);
        pc--;
    }
    printf("%d", p);
    for (int i = 1; i < bi; ++i) {
        printf(" %d", ar[i]);
    }
    printf("\n");
}

int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}

