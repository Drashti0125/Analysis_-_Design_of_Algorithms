// Link- https://www.hackerrank.com/challenges/two-strings/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int t;
    scanf("%d", &t);
    int i, j;
    char letter[26];
    char buf[100001];
    for (i=0; i<t; i++) {
        memset(letter, 0, 26);
        scanf("%s", buf);
        for (j=0; buf[j]!='\0'; j++) {
            letter[buf[j]-'a'] = 1;
        }
        scanf("%s", buf);
        for (j=0; buf[j]!='\0'; j++) {
            if (letter[buf[j]-'a']) {
                printf("YES\n");
                break;
            }
        }
        if (buf[j] == '\0') {
            printf("NO\n");
        }
    }
    return 0;
}

