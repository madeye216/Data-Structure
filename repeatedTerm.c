#include<stdio.h>
int main(){
	int n,i,j,a[n],count;
printf("Enter th number of terms:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	count=0;
	for(j=0;j<n;j++){
		if(a[i]==a[j]){
			count++;
		}
	}
	if(count!=0){
		printf("\nThe %d is repeated %d times",a[i],count-1);
	}
	else{
		printf("\nThe %d is not repeated");
	}
}
return 0;
}