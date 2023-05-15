
#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int x_cpy = x;
    printf("Multiplication: %d\n",x*=y);
    printf("Division: %d",x_cpy/=y);
}
