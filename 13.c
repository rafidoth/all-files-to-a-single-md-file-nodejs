
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("1. %d\n",a+b<=80 && b>=0);
    printf("2. %d\n", (a-b)==0 ||c!=0);
    printf("3. %d\n",a!=b ||b<a&&c>0);
}




