#include <stdio.h>

int main()
{
   // USING do while loop :
   // int i = 1;
  // int sum = 0;
   // do
   // {
   //     sum +=i;
   //     i++;
   // } while (i<=10);
   // 
   // printf("the sum of first 10 natural numbers is : %d",sum);


   // USING for loop

   int sum =0;

   for (int i = 1 ; i <=10; i++)
   {
    sum +=i;
   }
   
   printf("the sum of first 10 natural numbers is : %d", sum);

    return 0;
}