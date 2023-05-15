
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a. %d\n",a+b<=80);
    int x = (!(a+c)? 1:0);
    printf("b. %d\n", x);
    printf("c. %d\n",a!=0);
}



