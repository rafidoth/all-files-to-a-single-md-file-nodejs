
#include<stdio.h>

int main(){
   int x,y;
   scanf("%d %d",&x,&y);
   if(x>y){
    printf("Max: %d",x);
   }else if(x==y){
    printf("equal");
   }else{
    printf("Max: %d",y);
   }
}

