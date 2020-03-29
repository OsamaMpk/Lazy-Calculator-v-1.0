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
  printf("Welcome to the Lazy Calculator by @osama");
  delay(500);
  printf("\nLet's enter the Value One:\t");
  scanf("%d", &num_1);
  delay(500);
  printf("value stored!");
  delay(500);
  printf("\nLet's enter the value Two:\t");
  scanf("%d", &num_2);
  delay(500);
  printf("value stored!");
  delay(500);
  printf("\nWait! Wait! Wait! Let's put Operation:\t");
  oper = getch();
  delay(1000);
  printf("\nLazy Calculator claculating value Wait!");
  delay(500);
  printf("\nWait! result's are approximately ready.");
  delay(500);
  switch ( oper ){
   case '+' :
     calc = num_1 + num_2;
     printf("\nAdding this %d in %d is %f", num_1, num_2, calc);
     break;
   case '-' :
     if(num_1 <= num_2){
       calc = num_2 - num_1;
       printf("\nSubtracting %d from %d is %f", num_1, num_2, calc);
     }else{
       calc = num_1 - num_2;
       printf("\nSubtracting %d from %d is %f", num_2, num_1, calc);
     }
     break;
   case '*' :
     calc = num_2 * num_2;
     printf("\nMultpling this %d with %d is %f", num_1, num_2, calc);
     break;
   case '/' :
     if(num_1 <= num_2){
       calc = num_2 / num_1;
       printf("\nDividing %d on %d is %f", num_2, num_1, calc);
     }else{
       calc = num_1 / num_2;
       printf("\nDividing %d on %d is %f", num_1, num_2, calc);
     }
     break;
   default :
     printf("\nillegal operator you use use (+,-,/,*) only. and try again.");
     goto start_2;

  }
  start_2:
    delay(1000);
    printf("\nThanks for Using Lazy calculator.");
    delay(300);
    printf("\nDid you want to re-try press yes (y) otherwise no (n)");
    q_char = getch();
    if(q_char == 'y'){
      printf("\nThanks for giving us Second try.");
      delay(500);
      printf("\nWe are Setting things for you.");
      delay(1000);
      goto start_1;
    }else{
      goto end_1;
    }
end_1:
  delay(1000);
  printf("\nWe are sorry you won't happy with our program we try best to improve this claculator.");
  delay(400);
  printf("\nBye, bye.");
  getch();
}
