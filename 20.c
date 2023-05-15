

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x>0){
        if((x&(x-1))==0) printf("Yes");
        else printf("No");
    }else if(x==0){
        printf("Zero is not a valid input");
    }else printf("Neative input is not valid");
}




