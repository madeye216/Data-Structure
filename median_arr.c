#include<stdio.h>
int main(){
  int n,a[n],i,j,k,t;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  for(k=0;k<n;k++){
    scanf("%d",&a[k]);
  }
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
 }
   for(k=0;k<n;k++){
    printf("%d ",a[k]);
   }
   return 0;
   }
