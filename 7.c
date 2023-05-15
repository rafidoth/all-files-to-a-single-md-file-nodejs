#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int x_cpy = x;
    printf("Incremented Value: %d\n",x+=y);
    printf("Decremented Value: %d",x_cpy-=y);
}
