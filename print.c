#include <stdio.h>
int main()
{
    int a;
    scan("%d", &a);
    if (a % 2 == 0)
    {
        print("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}