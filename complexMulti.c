#include<stdio.h>
struct complex
{
	int real;
	int img;
};
int main(){
	struct complex s[2];
	
	int i,x=0,y=0,a=0,b=0,p=0;
	printf("Enter the real and imaginary value of two complex numbers:\n");
	for(i=0;i<2;i++){
		scanf("%d%d",&s[i].real,&s[i].img);
	}
x=s[0].real*s[1].real;
y=-(s[0].img*s[1].img);
a=s[0].img*s[1].real;
b=s[0].real*s[1].img;
printf("The multiplication of two complex number is==> ");
if(a+b>=0){
printf("%d + %di",x+y,a+b);
}
else if(a+b<0){
printf("%d - %di",x+y,-(a+b));
}
return 0;
}
