#include<stdio.h>
int gcd(int a,int b);
int main(){
	int a,b,g;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
    g=gcd(a,b);
	printf("the GCG of two number is %d",g);
	return 0;
}
int gcd(int a,int b){
	if (a==0)
	return b;
	if (b==0)
	return a;
	if (a>b)
	return gcd(a%b,b);
	if(a<b)
	return gcd(a,b%a);
}