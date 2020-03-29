#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
int num_1,num_2;
float calc;
char oper,q_char;
start_1:
  clrscr();
  delay(1000);
  printf("*----------------------------------------*\n");
  printf("|Welcome to the Lazy Calculator by @osama|\n");
  printf("*----------------------------------------*\n");
  delay(1000);
  printf("\nLet's enter the Value One:\t");
  scanf("%d", &num_1);
  delay(1000);
  printf("value stored!");
  delay(1000);
  printf("\nLet's enter the value Two:\t");
  scanf("%d", &num_2);
  delay(1000);
  printf("value stored!");
  delay(1000);
  printf("\nWait! Wait! Wait! Let's put Operation:\t");
  oper = getche();
  delay(1000);
  printf("\nLazy Calculator claculating value Wait!");
  delay(1000);
  printf("\nWait! result's are approximately ready.");
  delay(1000);
  switch ( oper ){
   case '+' :
     calc = num_1 + num_2;
     printf("\nAdding this %d in %d is %.0f", num_1, num_2, calc);
     break;
   case '-' :
     if(num_1 <= num_2){
       calc = num_2 - num_1;
       printf("\nSubtracting %d from %d is %.2f", num_1, num_2, calc);
     }else{
       calc = num_1 - num_2;
       printf("\nSubtracting %d from %d is %.2f", num_2, num_1, calc);
     }
     break;
   case '*' :
     calc = num_2 * num_2;
     printf("\nMultpling this %d with %d is %.0f", num_1, num_2, calc);
     break;
   case '/' :
     if(num_1 <= num_2){
       calc = num_2 / num_1;
       printf("\nDividing %d on %d is %.2f", num_2, num_1, calc);
     }else{
       calc = num_1 / num_2;
       printf("\nDividing %d on %d is %.2f", num_1, num_2, calc);
     }
     break;
   default :
     printf("\nillegal operator you use use (+,-,/,*) only. and try again.");
     goto start_2;

  }
  start_2:
    delay(1000);
    printf("\nThanks for Using Lazy calculator.");
    delay(1000);
    printf("\nDid you want to re-try press yes (y) otherwise no (n)\t");
    q_char = getche();
    delay(1000);
    if(q_char == 'y'){
      printf("\nThanks for giving us Second try.");
      delay(1000);
      printf("\nWe are Setting things for you.");
      delay(1000);
      goto start_1;
    }else{
      goto end_1;
    }
end_1:
  delay(1000);
  printf("\nWe are sorry you won't happy with our program we try best to improve this calculator.");
  delay(1000);
  printf("\nBye, bye. ");
  getch();
}
