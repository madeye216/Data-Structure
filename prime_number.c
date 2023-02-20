#include<stdio.h>
int main(){
  int n,i,a=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0){
    a++;
    }
  }
    if(a==2){
      printf("Its a prime number");
    }
    else{
      printf("Its not a prime number");
    }
  return 0;
}
