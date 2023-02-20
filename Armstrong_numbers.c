#include<stdio.h>
int main()
{
  int a=0,b,c,n;
  printf("Enter a number\n");
  scanf("%d",&n);
  n=c;
  while(n!=0){
  b=n%10;
  a=a+(b*b*b);
  n=n/10;
}
  if(a=c){
    printf("Its a armstrong number");
  }
  else{
    printf("Its not a armstrong number");
  }
  return 0;
}
