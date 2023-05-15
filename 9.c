
#include<stdio.h>

int main(){
    int x;
    float y;
    scanf("%d %f",&x,&y);
    int y2 = y;
    float x2 = x;
    printf("Assignment: %f assigned to an int produces %d\n",y,y2);
    printf("Assignment: %d assigned to a float produces %f\n",x,x2);

    printf("Type Casting: (float) %d produces %f",x,(float)x);
    printf("Type Casting: (int) %f produces %d",y,(int)y);

}

