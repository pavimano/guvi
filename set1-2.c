#include <stdio.h>
int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    // True if the number is perfectly divisible by 2
    if(a % 2 == 0)
        printf("%d is even.", a);
    else
        printf("%d is odd.", a);

    return 0;
}
