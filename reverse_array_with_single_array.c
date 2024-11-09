#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int main() {

    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0, j = length-1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}


// input: 
// 8
// 8 3 2 5 2 9 8 4
// output:
// 4 8 9 2 5 2 3 8 
