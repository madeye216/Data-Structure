
#include<stdio.h>
int main(){
int a,r=0,n;
printf("Enter a number");
scanf("%d",&n);
while(n!=0){
  a=n%10;
  r=r*10+a;
  n=n/10;
}
printf("The reverse of the number is %d",r);

}
