#include <stdio.h>
int main(void)
{
    int n;
    
    printf("The number %d ", n);

    if (n > 0) {
        printf("is positive.\n");
    } else if (n == 0) {
        printf("is zero.\n");
    } else {
        printf("is negative.\n");
    }

    return 0;
}