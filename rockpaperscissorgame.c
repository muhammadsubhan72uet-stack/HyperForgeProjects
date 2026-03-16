#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { 
    int user , comp;
    char play;
srand(time(0));


  do{


        printf("Choose number : 1- Rock\n 2-Paper\n 3-Scissor\n");
        scanf("%d",&user);
    
         comp = rand() % 3 + 1;
        printf("Computer chooses %d\n   " , comp) ;
        if (user==comp){
          printf("Its a tie    ");}
        else if ((user==1 && comp ==3) || (user==2 && comp == 1) || (user==3 && comp == 2)){
         printf("you win    ");

        }
        else {
         printf("You lose   ");
      }
       printf("Say y to play again\n");
       scanf(" %c", &play);





    }while (play == 'y');
  return 0;
}
