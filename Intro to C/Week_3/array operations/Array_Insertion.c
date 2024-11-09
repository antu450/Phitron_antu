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

    int index, value;    // index is the position where the change will happen
                        // value is the new value to insert at that position

    scanf("%d %d", &index, &value);

    // we need  to increase the length of the array to insert a new value

    length++;

    for (int i = length-1; i >= index; i--)
    {
        a[i+1] = a[i];    // Shift each element to the right by one position
    }

    a[index]=value;  // Insert the new value at the specified index

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    
    

    return 0;
}
