#include<stdio.h>
int main()
{
int n,i,a=0;
printf("The prime number between 1 and 300 are");
for(n=2;n<=300;n++)
{
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
        a++;
    }
  if(a==2){
        printf("\a%d\t",n);
}
}
return 0;
}

