#include <stdio.h>
struct Account
{
   int No;
   char name[100];
   int Balance;

} s;
main()
{
   struct Account s[100];
   int n;

   printf("ENTER THE NUMBERS OF ACCOUNT :\n");
   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
      printf("Enter Number Of Accountant :\n");
      scanf("%d", &s[i].No);

      printf("Enter Acc Holder Name:\n");
      scanf("%s", &s[i].name);

      printf("Enter Available Balance :\n");
      scanf("%d", &s[i].Balance);
   }
   for (int i = 0; i < n; i++)
   {
      printf(" ACC No :%d\n ACC Holder NAME : %s\n: %d\n BALANCE :%d\n");
   }
}