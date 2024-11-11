#include<stdio.h>
#include<string.h>

int main(){

    char a[10] = "antu";
    char b[10] = "turja";

    int length = strlen(a);
    printf("length of A string  = %d\n", length);
    
    strcpy(a, b);
    printf("Copy of B string in A string = %s\n", a);
    
    char c[10] = "Xenoz ";
    char d[10] = "Saitama";
    
    strcat(c, d);
    printf("adding d on c string = %s\n", c);
    
    int compare = strcmp(c, d);
    printf("compared value = %d\n", compare);

    strrev(c);
    printf("reversing string c = %s", c);

    return 0;
}

//basics of string
