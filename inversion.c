#include<stdio.h>
int main(){
	int i,j,c=0,a[5]={2,3,8,6,1};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i<j&&a[i]>a[j]){
				c++;
			}
		}
	}
	printf("%d",c);

return 0;
}