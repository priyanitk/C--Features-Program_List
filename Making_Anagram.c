#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    int result=0;
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    int count[26],count1[26],i,j;
    for(i=0;i<26;i++)
    {
        count[i]=count1[i]=0;
    }
    for(i=0;a[i]!='\0';i++)
    {
        count[(int)(a[i]-'a')]++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        count1[b[j]-'a']++;
    }
    for(i=0;i<26;i++)
        result+=abs(count[i]-count1[i]);

    printf("%d",result);
    return 0;
}
