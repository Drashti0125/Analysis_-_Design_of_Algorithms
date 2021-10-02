// Link- https://www.hackerrank.com/challenges/runningtime/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int placeElement(int ar_size, int *  ar) {

    int temp = ar[ar_size-1];
    int shift = 0;
    for(int i=ar_size - 1; i>=0;i--)
    {
        if(ar[i-1] > temp)
        {
            ar[i] = ar[i-1]; 
            shift++;
        } else {
            ar[i]= temp;
            break;
        }
        
    }
   return shift;
    
}

void insertionSort(int ar_size, int *  ar) {

    int shifts=0;
    for(int i = 2; i <= ar_size; i++) {
        shifts += placeElement(i,ar);
        
    }
    printf("%d\n", shifts);
}

int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}

