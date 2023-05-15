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
