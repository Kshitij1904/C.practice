
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);
}

void swapByRefrence(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    swapByValue(a, b);
    swapByRefrence(&a, &b);

    printf("%d %d\n", a, b);
    
    return 0;
}