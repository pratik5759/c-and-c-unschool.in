/*
 devoloped by = Pratik Dipak Patil
 ROCK PAPER SCISSORS GAME
 unschool
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void start();
void end();
int main()
{
    int user_ch,com_ch,press,count=1;
    top :
    start();
    printf("\nPLAYING THE GAME FOR %d TIME ",count);
    printf("\nENTER YOUR CHOICE : ");
    scanf("%d",&user_ch);
     if(user_ch<=3 && user_ch >0)
     {

         srand(time(0));
         com_ch = rand() % 3 +1;
         switch(user_ch) // to display user choice
          {
            case 1:  // users choice is 1
               printf("\nYOUR CHOICE IS : ROCK\n");
               break;

            case 2:  // users choice is 2
               printf("\nYOUR CHOICE IS : PAPER\n");
               break;

            case 3:  // users choice is 3
               printf("\nYOUR CHOICE IS : SCISSORS\n");
               break;

            default:
                break;

          }
         switch(com_ch) // to display computer choice
          {
            case 1:  // computers choice is 1
               printf("\nCOMPUTERS CHOICE IS : ROCK\n");
               break;

            case 2:  // computers choice is 2
               printf("\nCOMPUTERS CHOICE IS : PAPER\n");
               break;

            case 3:  // computers choice is 3
               printf("\nCOMPUTERS CHOICE IS : SCISSORS\n");
               break;

            default:
                break;

          }
          Sleep(1000);
 printf("\n----------------------------------------------------------------------------------------------------------------------\n");

// this is the condition checking section
     if( com_ch == 1 && user_ch== 1 ) //  com 1 Vs 1 user
      {
        printf("\nTIE !!!!");
        printf("\nBETTER LUCK NEXT TIME !! ");
      }
      else if( com_ch == 2 && user_ch == 1 ) //  com 2 Vs 1 user
       {
         printf("\nYOU LOSE !");
         printf("\nBETTER LUCK NEXT TIME !! ");
       }
       else if( com_ch == 3 && user_ch == 1 )  //  com 3 Vs 1 user
        {
          printf("\nCONGRATULATIONS !!!");
          printf("\nYOU WIN\n");
        }
        else if( com_ch == 1 && user_ch == 2 ) //  com 1 Vs 2 user
         {
          printf("\nCONGRATULATIONS !!!");
          printf("\nYOU WIN\n");
         }
         else if( com_ch == 2 && user_ch == 2 ) //  com 2 Vs 2 user
          {
            printf("\nTIE !!!!");
            printf("\nBETTER LUCK NEXT TIME !! ");
          }
          else if( com_ch == 3 && user_ch == 2 )//  com 3 Vs 2 user
           {
             printf("\nYOU LOSE !");
             printf("\nBETTER LUCK NEXT TIME !! ");
           }
           else if( com_ch == 1 && user_ch == 3 ) //  com 1 Vs 3 user
            {
              printf("\nYOU LOSE !");
              printf("\nBETTER LUCK NEXT TIME !! ");
            }
            else if( com_ch == 2 && user_ch == 3 ) //  com 2 Vs 3 user
             {
               printf("\nCONGRATULATIONS !!!");
               printf("\nYOU WIN\n");
             }
             else if( com_ch == 3 && user_ch == 3 ) //  com 3 Vs 3 user
              {
                printf("\nTIE !!!!");
              }
      printf("\n----------------------------------------------------------------------------------------------------------------------\n");
      printf("PRESS :");
      printf("\n1 . FOR RESTARTING GAME");
      printf("\nPRESS 0 KEY TO QUIT THE GAME\n");
       scanf("%d",&press);
        if(press==1)// for restarting tha game
        {
          count++;
          system("cls");
            goto top;
        }
        else  // for closing tha game
        {
          end();
        }
     }
     else
      {
         printf("\n----------------------------------------------------------------------------------------------------------------------\n");
         printf("\nYOU ENTERED WRONG CHOICE \n");
         printf("PLEASE ENTER NUMBER BETWEEN 1 TO 3  \n");
         printf("\n----------------------------------------------------------------------------------------------------------------------\n");
         printf("PRESS :");
         printf("\n1 . FOR RESTARTING GAME");
         printf("\nPRESS 0 KEY TO QUIT THE GAME\n");
          scanf("%d",&press);
           if(press==1)// for restarting tha game
           {
             count++;
             system("cls");
             goto top;
           }
           else  // for closing tha game
           {
               end();
           }
      }
     return 0;
}
void start()// this is the starting function
{
    printf("**********************************************************************************************************************\n");
     Sleep(500);
    printf("\t\t\t\t\t\tROCK PAPER SCISSORS GAME \n");
     Sleep(500);
    printf("**********************************************************************************************************************\n");
     Sleep(500);
    printf("\nFOLLOWING ARE THE CODES FOR GAME : \n");
     Sleep(700);
    printf("1 . ROCK \n");
     Sleep(700);
    printf("2 . PAPER \n");
     Sleep(700);
    printf("3 . SCISSORS \n");
     Sleep(1000);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    Sleep(1000);
}
void end ()
{
    system("cls");
     Sleep(500);
    printf("\n\n\n\n\n\n\n\n\n\n**********************************************************************************************************************\n");
     Sleep(500);
    printf("\t\t\t\t\tTHANK YOU FOR USING THIS PROGRAM\n");
     Sleep(500);
    printf("\t\t\t\t\tDEVOLOPED BY : PRATIK DIPAK PATIL\n");
     Sleep(500);
    printf("\t\t\t\t   UNSCHOOL COMMUNITY USERNAME : pratik_5759\n");
     Sleep(500);
    printf("**********************************************************************************************************************\n\n\n\n\n\n\n");
}
