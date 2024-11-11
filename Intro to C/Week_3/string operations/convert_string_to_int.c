#include<stdio.h>
#include<string.h>

int main() {
    char str[20];
    
    // Read the string
    scanf("%s", str);

    int num = 0;
    int length = strlen(str);  // Automatically calculate the string length

    // Convert the string to integer
    for (int i = 0; i < length; i++) {
        int digit = str[i] - '0';
        num = num * 10 + digit;
    }

    // Output the resulting integer
    printf("%d", num);

    return 0;
}
