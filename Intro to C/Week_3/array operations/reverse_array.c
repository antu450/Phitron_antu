#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000],b[100000];
int main() {

    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0,j=length-1; i < length; i++, j--)
    {
        b[j]=a[i];
    }
    for (int j = 0; j < length; j++)
    {
        printf("%d ", b[j]);
    }
    
    return 0;
}


// input:
// 4
// 3 2 5 8

// output:
// 8 5 2 3 
