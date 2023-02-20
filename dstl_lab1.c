#include<stdio.h>
int main(){
	int i,j,a[20],b[20],c[20],d=0,k=0,l,n,n1;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the element of first array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number of second element:");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	n1=n;
	for(i=0;i<n;i++){
	k=0;
	l=0;
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				k++;
			}
			if(b[i]==a[j]){
				l++;
			}
	}
    if(k==0){
		c[d]=a[i];
		d++;
	}
	if(l==0){
		c[d]=b[i];
		d++;
	}
	}
	for(i=0;i<d;i++){
		printf("%d ",c[i]);
	}
return 0;
}
