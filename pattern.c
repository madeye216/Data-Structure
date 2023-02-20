#include<stdio.h>
int main(){
 int i,j,row,a=0;
 printf("Enter the number of row\n");
 scanf("%d",&row);
 for(i=1;i<=row;++i){
    for(j=1;j<=i;++j){
        ++a;
        printf("%d ",a);
    }
    printf("\n");
 }
 return 0;
}
