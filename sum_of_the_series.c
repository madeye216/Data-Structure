#include<stdio.h>
int fact(int m )
{
  int y,x;
  x=1;
for(y=1;y<=x;y++){
x=x*y;
}
}
int main(){
int n,i,s=0;
printf("Enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i=i+2){
  s=s+(i/fact(i));
  printf("%d  ",s);
}
return 0;
}
