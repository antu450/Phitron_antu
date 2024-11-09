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

    int index;
    scanf("%d", &index);

    for (int i = index; i < length-1; i++)
    {
        a[i] = a[i+1];
    }

    length--;
    
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    
//1 2 3 4 5
//4 3   5 6

    


    return 0;
}
