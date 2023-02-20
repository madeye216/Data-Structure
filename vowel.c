#include<stdio.h>
int main()
{
char g;
scanf("%ch",&g);
if((g=='a'||g=='A')||(g=='e'||g=='E')||(g=='i'||g=='I')||(g=='o'||g=='O')||(g=='a'||g=='U')){
    printf("Vowel");
}
else{
    printf("Consonant");
}
return 0;
}

