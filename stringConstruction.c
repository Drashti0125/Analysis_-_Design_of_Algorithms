// Link- https://www.hackerrank.com/challenges/string-construction/problem

#include <stdio.h>
#include <string.h>

int main(void) {
    
    int t;scanf("%d",&t);
    while(t--)
{    char inp[100005];
    int i,c=0,l,arr[26];
    for(i=0;i<26;i++)arr[i]=0;
    scanf("%s",inp);
    l=strlen(inp);
    for(i=0;i<l;i++)
    {
        arr[inp[i]-'a']+=1;
    }
    for(i=0;i<26;i++)
    if(arr[i]!=0)
    c+=1;
    printf("%d\n",c);}
    return 0;
}


