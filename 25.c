

#include<stdio.h>
int main(){
    printf("Enter two numbers and Select arithmetic operation from below");
    printf("\n1 = Addition\n2 = Subraction \n3 = Multiplication\n4 = Division\n");


    float a,b;
    int o;
    scanf("%f %f",&a,&b);
    scanf("%d",&o);
    switch(o){
    case 1:
        printf("Addition: %f",a+b);
        break;
    case 2:
        printf("Subtraction: %f",a-b);
        break;
    case 3:
        printf("Multiplication: %f",a*b);
        break;
    case 4:
        if(b==0) printf("Error: Divisor is zero");
        else{
            printf("Type 1 for Quotient\n");
            printf("Type 2 for Remainder\n");
            int choice;
            scanf("%d",&choice);
            if(choice ==1) printf("Quotient: %f",a/b);
            else {

                printf("Remainder: %d",(int)a%(int)b);
            }
        }
        break;
    }


}
