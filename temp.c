#include<stdio.h>
int main{
    int t;
    if(t<0){
        printf("freezing weather");
    }
     if(t>0&&t<10){
        printf("very cold weather");
    }
     if(t>10&&t<20){
        printf("cold weather");
    }
     if(t>20&&t<30){
        printf("Normal in temp");
    }
     if(t>30&&t<40){
        printf("Hot");
    }
     if(t>=40){
        printf("Very hot");
    }
    
}