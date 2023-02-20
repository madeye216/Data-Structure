#include<stdio.h>
#include<math.h>
int main(){
  int n,i,x;
  float sum=1;
  printf("Number of term in the series:");
  scanf("%d",&n);
  // printf("Enter the value of variable:");
  // scanf("%d",&x);
  for(i=1;i<n;i=i+1)
  {
    sum=sum+1.0/((2*i)+1);
    printf("%f ",sum);
  }
  printf("The sum of the series is %f",sum);
  return 0;
}