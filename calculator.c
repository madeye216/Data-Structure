#include<stdio.h>
int main(){
  char operation;
  float a,b;
  printf("Enter a operation\n");
  scanf("%c",&operation);
  printf("Enter two digits\n");
  scanf("%f%f",&a,&b);
  switch(operation){
  case '+':
  printf("%f+%f=%f",a,b,a+b);
  break;

  case '-':
  printf("%f-%f=%f",a,b,a-b);
  break;

  case '*':
  printf("%f*%f=%f",a,b,a*b);
  break;

  case '/':
  printf("%f/%f=%f",a,b,a/b);
  break;

  default:
  printf("Error");

   }
return 0;
}
