// Link- https://www.hackerrank.com/challenges/separate-the-numbers/problem

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool rec_is_beautiful(char *s, long long int* n) {

    long long int l = strlen(s);
    if (l == 1 && *n == 0 ) return false;
    if (l == 0) return true;

    if(*n <= 0) {
        long long int c = s[0]-'0';
        if(c == 0) return false;
        long long int a0 = c;
        long long int a1 = a0+1;
        char *a1_str = malloc(sizeof(char)*(l+1));
        sprintf(a1_str, "%lld", a1);
        
        long long int l_a1 = strlen(a1_str);
        if(l_a1 > l) return false;
        
        if(rec_is_beautiful(&s[1], &a0)) {
            *n = a0;
            return true; 
        }
        return false;
    } else {
        long long int a1 = *n + 1;
        char *a1_str = malloc(sizeof(char)*(l+1));
        sprintf(a1_str, "%lld", a1);
        long long int l_a1 = strlen(a1_str);
        if(l_a1 > l) return false;
        if(strncmp(a1_str, &s[0], l_a1) == 0 &&
                rec_is_beautiful(&s[l_a1], &a1)) {
            return true;
        } else {
            *n = (*n)*10 + s[0]-'0';
            return rec_is_beautiful(&s[1], n);
        }
        return false;
    }
    return false;
}

bool is_beautiful(char *s, long long int* n) {
    bool b = rec_is_beautiful(s, n);
    long long int l = strlen(s);
    char *n_str = malloc(sizeof(char)*(l+1));                              
    sprintf(n_str, "%lld", *n);
    return b && l>strlen(n_str);
}

int main(){
    long long int q; 
    scanf("%lld",&q);
    for(long long int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        long long int n = 0;
        if(is_beautiful(s, &n)) {
            printf("YES %lld\n", n);
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

