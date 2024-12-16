#include <stdio.h>
int main()
{
    int a=0, b=1, c = 0;
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0 ;
}