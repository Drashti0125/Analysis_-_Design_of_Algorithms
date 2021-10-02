// Link- https://www.hackerrank.com/challenges/countingsort2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar1 [n];
    for (int i = 0; i < n; i++) {
        scanf("%d", ar1 + i);
    }
    int ar2 [100];
    for (int j = 0; j < 100; j++) {
        ar2[j] = 0;
    }
    count(ar1, ar2, n);
    for(int k = 0; k < 100; k++) {
        int c = ar2[k];
        while(c > 0) {
            printf("%d ", k);
            c--;
        }
    }
    return 0;
}

void count (int* ar1, int *ar2, int size) {
    for(int i = 0; i < size; i++) {
        ar2[(ar1[i])]++;
    }
}

