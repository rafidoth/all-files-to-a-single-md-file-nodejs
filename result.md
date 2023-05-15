File name : 1.c
```c
#include<stdio.h>


int main(){
    int a = 17;
    float b = 3.508;
    char ch = 'W';

    printf("Integer Value = %d\n",a);
    printf("Floating Value = %.3f\n",b);
    printf("Character Value = %c",ch);
}

```
File name : 2.c
```c
#include<stdio.h>


int main(){
    int a = 10;
    int b = 5;

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
}


```
File name : 3.c
```c
#include<stdio.h>

int main(){
    float a ,b;
    scanf("%f %f",&a,&b);
    printf("Addition: %f\n",a+b);
    printf("subtraction: %f\n",a-b);
    printf("Multiplication: %f\n",a*b);
    printf("Division: %f",a/b);
}

```
File name : 4.c
```c
#include<stdio.h>

int main(){
    float r ;
    scanf("%f",&r);
    float pi = 3.1416;
    printf("Area = %.2f", 2*pi*r);
}


```
File name : 5.c
```c
#include<stdio.h>

int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float x= (3.31*a*a+2.01*b*b*b)/(7.16*b*b+2.01*a*a*a);
    printf("X = %f",x);

}

```
File name : 6.c
```c

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int x = a;
    printf("X++ : %d\n",x++);
    x = a;
    printf("++X : %d\n",++x);
    x=a;
    printf("X-- : %d\n",x--);
    x=a;
    printf("--X : %d",--x);

}

```
File name : 7.c
```c
#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int x_cpy = x;
    printf("Incremented Value: %d\n",x+=y);
    printf("Decremented Value: %d",x_cpy-=y);
}

```
File name : 8.c
```c

#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int x_cpy = x;
    printf("Multiplication: %d\n",x*=y);
    printf("Division: %d",x_cpy/=y);
}

```
File name : 9.c
```c

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


```
File name : 10.c
```c

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


```
File name : 11.c
```c
#include<stdio.h>


int main(){
    int tries=3;
    int player1;
    printf("Player 1 : Select a number\n");
    scanf("%d",&player1);

    while(tries!=0){
        int player2;
        scanf("%d",&player2);
        if(player2==player1){
            printf("Right, Player-2 wins!\n");
            return 0;
        }
        tries--;
        printf("Wrong, %d Choice(s) Left!\n",tries);
    }
    printf("Player-1 wins");
}

```
File name : 12.c
```c

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a. %d\n",a+b<=80);
    int x = (!(a+c)? 1:0);
    printf("b. %d\n", x);
    printf("c. %d\n",a!=0);
}




```
File name : 13.c
```c

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("1. %d\n",a+b<=80 && b>=0);
    printf("2. %d\n", (a-b)==0 ||c!=0);
    printf("3. %d\n",a!=b ||b<a&&c>0);
}





```
File name : 14.c
```c


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





```
File name : 15.c
```c
#include<stdio.h>

int main(){
    float x;
    scanf("%d",&x);
    if(x>=0) printf("Positive");
    else printf("Negative");


}

```
File name : 16.c
```c
#include<stdio.h>

int main(){
    int x ;
    scanf("%d",&x);
    (x%2==0)? printf("Even") : printf("Odd");
}

```
File name : 17.c
```c
#include<stdio.h>

int main(){
    int x ;
    scanf("%d",&x);
    switch(x){
        case 0 : printf("zero");break;
        case 1 : printf("one");break;
        case 2 : printf("two");break;
        case 3 : printf("three");break;
        case 4 : printf("four");break;
        case 5 : printf("five");break;
        case 6 : printf("six");break;
        case 7 : printf("seven");break;
        case 8 : printf("eight");break;
        case 9 : printf("nine");break;
    }
}

```
File name : 18.c
```c

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180 && a>0 &&b>0&&c>0) printf("Yes");
    else printf("NO");
}





```
File name : 19.c
```c

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if((x&(x-1))==0) printf("Yes");
    else printf("No");
}





```
File name : 20.c
```c


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





```
File name : 21.c
```c


#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y) printf("%d is greater than %d",x,y);
    else if (x==y) printf("%d is equal to %d",x,y);
    else printf("%d is less than %d",x,y);
}






```
File name : 22.c
```c


#include<stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||(y%400==0)) printf("Yes");
    else printf("No");
}






```
File name : 23.c
```c


#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch <=57) printf("Digit");
    else if(ch>=65 && ch <=122) printf("Alphabet");
    else printf("Special");
}







```
File name : 24.c
```c

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

```
File name : 25.c
```c


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

```
File name : 26.c
```c
#include<stdio.h>


int main(){
    int tries=3;
    int player1;
    printf("Player 1 : Select a number\n");
    scanf("%d",&player1);

    while(tries!=0){
        int player2;
        scanf("%d",&player2);
        if(player2==player1){
            printf("Right, Player-2 wins!\n");
            return 0;
        }
        tries--;
        printf("Wrong, %d Choice(s) Left!\n",tries);
    }
    printf("Player-1 wins");
}

```
