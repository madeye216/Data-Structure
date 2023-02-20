#include<stdio.h>
int nearestPrime(int n);
int main(){
    int a,n;
    scanf("%d",&n);
    a=nearestPrime(n);
    printf("%d",a);
    return 0;
}
int nearestPrime(int n){
	int i,j,c=1;
	for(i=n-1;i>0;i--){
	    c=1;
		for(j=2;j<i;j++){
			if(i%j==0){
              c=0;
              break;
            //   printf("%d ",i);
			}
		}
		if(c==1)
        {
			return i;
        //     printf("\n");
		// printf("%d",i);
		}
        
	}
}
