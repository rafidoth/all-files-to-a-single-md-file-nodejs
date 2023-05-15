

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float x1,x2;
    float d = b*b - 4*a*c;
    if(d>0){
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("%.2f %.2f",x1,x2);
    }else if(d==0){
        x1 = -b/(2*a);
    }else{
        printf("Imaginary");
    }
}




