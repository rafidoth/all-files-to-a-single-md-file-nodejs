
#include<stdio.h>
int main(){

    float a,b;
    char o;
    scanf("%f %c %f",&a,&o,&b);
    switch(o){
    case '+':
        printf("Addition: %f",a+b);
        break;
    case '-':
        printf("Subtraction: %f",a-b);
        break;
    case '*':
        printf("Multiplication: %f",a*b);
        break;
    case '/':
        if(b==0) printf("Division: Zero as divisor is not valid!");
        else printf("Division: %f",a/b);
        break;
    }


}
