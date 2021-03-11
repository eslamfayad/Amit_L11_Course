#include <stdio.h>
#include <stdlib.h>
int num;
int main()
{
    printf("                             Session 1 Asignment 1                 Eslam Fayad\n");
    printf("Enter The Number: ");
    scanf("%d",&num);
     if (num&1)
      {
        printf("The Number is Odd = 1\n");
        printf("The Number is even = 0\n");
      }
     else
        {
        printf("The Number is Odd = 0 \n");
        printf("The Number is even = 1\n");
     }

    return 0;
}
