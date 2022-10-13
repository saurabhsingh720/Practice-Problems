#include<stdio.h>

int main(){
    int n,a,b,c,d,e,f,g=0,h,sum=0;
    scanf("%d",&n);
    a=n %100;
    b=n/100;
    c=a%50;
    d=a/50;
    e=c%10;
    f=c/10;
    if(e>=5){
   g=e%5;
   h=e/5;
   goto label;
    }
    else{
        h=e;
        goto label;
    }
    label:
    sum=b+d+f+h+g;
    printf("%d",sum);
    return 0;
}