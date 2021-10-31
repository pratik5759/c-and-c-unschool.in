// devoloped by pratik patil 
// date 31-oct-2021
#include<stdio.h>
#include<conio.h>
struct employee
{
 char name[20];
 int   id[5];
 int  exp[5];
 int salary[5];
};
int main()
{
 int i;
 struct employee s[5];

 for(i=0;i<5;i++)
 {
  printf("\nENTER THE DETAILS OF EMPLOYEE NO : %d \n",i+1);
  printf("ENTER THE NAME :\n");
  scanf("%s",&s[i].name);
  printf("ENTER THE ID NUMBER :\n");
  scanf("%d",&s[i].id[i]);
  printf("ENTER THE EXPERIANCE YOU HAVE (IN YRS):\n");
  scanf("%d",&s[i].exp[i]);
  printf("ENTER THE SALARY YOU HAVE :\n");
  scanf("%d",&s[i].salary[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("\n\n THE DETAILS OF EMPLOYEE NO : %d\n",i+1);
  printf(" NAME : %s \n",s[i].name);
  printf(" ID NUMBER : %d \n",s[i].id[i]);
  printf(" EXPERIANCE YOU HAVE (IN YRS) : %d \n",s[i].exp[i]);
  printf(" SALARY YOU HAVE : %d \n",s[i].salary[i]);
 }

return 0;
}