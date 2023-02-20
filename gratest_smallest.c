#include <stdio.h>
int place_counter(int a[],int x)
{
    int i,count=0;
	while(i!=x)
    {
      if(a[i]==x)
	  {
        break;
      }
      else{
        count++;
      }
      i++;
    }
	return count;
}
int main(void)
 {
  int n,i,a[100],j,key,max,min,count=0,diff=0,diff1;
  printf("Enter the number of the array:");
  scanf("%d",&n);
  printf("Enter the nuber of elements in the array:");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the key:");
  scanf("%d",&key);
  count=place_counter(a,key);
  printf("%d",count);
  return 0;
 }
	