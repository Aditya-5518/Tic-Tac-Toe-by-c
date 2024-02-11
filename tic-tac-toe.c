#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main()
{
 char sq[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
 int check[10]={0};
 int i,ch,j=0,flag=0,k,won;
 char chance,l[30];
 char p1[30],p2[30];
 int p; 
 fflush(stdin);
 printf("entre player-1 (X) name==>");
 gets(p1);
 fflush(stdin);

 printf("\nenter player-2 (O) name==>");
 gets(p2);
 fflush(stdin);
 
 for(i=1;i<=9;i++)
 {
   
     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[1],sq[2],sq[3]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[4],sq[5],sq[6]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[7],sq[8],sq[9]);
     printf("\n           ||           ||           ");


     if(i%2==0)
     {
         chance='O';
         printf("\n%s (O) enter your block number==>",p2);
         strcpy(l,p2);
     }
     else
     {
         printf("\n%s (X) enter your block number==>",p1);
         chance='X';
         strcpy(l,p1);
     }
 
      scanf("%d",&ch);
      for(k=0;k<9;k++)
      {
         if(check[k]==ch)
          {
             flag=1;
             break;
          }
         else
          {
             flag=0;   
          }
      }
      if(flag==0)
      {
         check[j]=ch;
         j++;
         sq[ch]=chance;
      }
     else
      {
         printf("block is already occupied, enter another block");
         Sleep(3500);
         i--;  
      }   
         flag=0; 

      if((sq[1]=='X' && sq[2]=='X' && sq[3]=='X')||(sq[1]=='O' && sq[2]=='O' && sq[3]=='O'))
      {
      break;
      }

      else if((sq[4]=='X' && sq[5]=='X' && sq[6]=='X')||(sq[4]=='O' && sq[5]=='O' && sq[6]=='O'))
      {
        break;
      }
      
      else if((sq[7]=='X' && sq[8]=='X' && sq[9]=='X')||(sq[7]=='O' && sq[8]=='O' && sq[9]=='O'))
      {
       break;
      }

      else if((sq[1]=='X' && sq[4]=='X' && sq[7]=='X')||(sq[1]=='O' && sq[4]=='O' && sq[7]=='O'))
      {
       break;
      }

      else if((sq[2]=='X' && sq[5]=='X' && sq[8]=='X')||(sq[2]=='O' && sq[5]=='O' && sq[8]=='O'))
      {
       break;
      }

      else if((sq[3]=='X' && sq[6]=='X' && sq[9]=='X')||(sq[3]=='O' && sq[6]=='O' && sq[9]=='O'))
      {
       break;
      }

      else if((sq[1]=='X' && sq[5]=='X' && sq[9]=='X')||(sq[1]=='O' && sq[5]=='O' && sq[9]=='O'))
      {
       break;
      }
      
      else if((sq[3]=='X' && sq[5]=='X' && sq[7]=='X')||(sq[3]=='O' && sq[5]=='O' && sq[7]=='O'))
      {
       break;
      }
      
      else
      {

      }
      system("cls");
  }
  system("cls");
  
      
      if(i==10)
      {
         printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[1],sq[2],sq[3]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[4],sq[5],sq[6]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[7],sq[8],sq[9]);
     printf("\n           ||           ||           ");
         printf("\nthe game is draw \n");
      }
      else
      {
         printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[1],sq[2],sq[3]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[4],sq[5],sq[6]);
     printf("\n           ||           ||           ");
     printf("\n=====================================");

     printf("\n           ||           ||           ");
     printf("\n      %c    ||      %c    ||     %c    ",sq[7],sq[8],sq[9]);
     printf("\n           ||           ||           ");
          printf("\nthe winner is==>");
          puts(l);
      }
  
  printf("\nif u want to play again press 1 and for exit press 0===>");
  scanf(" %d", &p);
  if(p==1)
  {
     main();
  }
  else
  {
     exit(1);
  }
}