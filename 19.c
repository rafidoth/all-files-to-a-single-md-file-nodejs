
#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if((x&(x-1))==0) printf("Yes");
    else printf("No");
}




