#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter any three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b){
    if(a>c){
      printf("%d is the greatest",a);
      }
      else{
        printf("%d is the greatest",c);
      }

    }
  if(b>a){
      if(b>c){
        printf("%d is the greatest",b);
      }
      else{
        printf("%d is the greatest",c);
      }
  }
 else{
   printf("The all numbers all equal");
 }
}
