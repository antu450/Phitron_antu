#include<stdio.h>

int a[100000], b[100000];

int main(){

    int length_a = 0, length_b = 0;

    scanf("%d", &length_a);

    for (int i = 0; i < length_a; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before Copy\n");

    for (int i = 0; i < length_a; i++)
    {
       printf("%d ", a[i]);
    }

    printf("\n");

     for (int i = 0; i < length_a; i++)
    {
       printf("%d ", b[i]);
    }
    printf("\n");
    printf("\n");

    printf("Processing of Copy\n");
    printf("\n");

    for (int i = 0; i < length_a; i++)
    {
        b[i] = a[i];
    }

     printf("After Copy\n");

    for (int i = 0; i < length_a; i++)
    {
       printf("%d ", a[i]);
    }

    printf("\n");

     for (int i = 0; i < length_a; i++)
    {
       printf("%d ", b[i]);
    }
    printf("\n");
    

    return 0;
}