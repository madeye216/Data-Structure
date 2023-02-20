#include<stdio.h>
int fact(int);
void main()
{
    int num,factorial;
    printf("Enter a number");
    scanf("%d",&num);
    factorial=fact(num);
    printf("The factorial of the number is %d",factorial);
}

int fact(int n){
int a,b=1;
for(a=1;a<=n;a++){
    b=b*a;
    return b;
}
}
