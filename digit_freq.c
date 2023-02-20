#include<stdio.h>
int main(){
int c,i;
char sen[1000];
gets(sen);
while(sen[i]!='\0')
{
	if(sen[i]==32)
	{
      printf("\n");
	}
	else
	{
      printf("%c",sen[i]);
	}
	i++;
}

return 0;
}