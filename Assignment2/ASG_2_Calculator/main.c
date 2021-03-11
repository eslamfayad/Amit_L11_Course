#include <stdio.h>
#include <stdlib.h>
float num1,num2,result;
char oper;
int main()
{
    printf("                             Session 2 Asignment 2                  Eslam Fayad\n");

    while(1)
    {
     printf("Enter The 1st no Then Operator Then 2nd no : EX X+Y \n");
     scanf("%f %c %f",&num1,&oper,&num2);

        switch(oper)
        {
        case '+':
        printf("Result %.2f\n",num1+num2);
        break;
        case '-':
        printf("Result %.2f\n",num1-num2);
        break;
        case '*':
        printf("Result %.2f\n",num1*num2);
        break;
        case '/':
        printf("Result %.2f\n",num1/num2);
        break;
        default:
        printf("Operator Is Not Correct\n");

        }
     }
    return 0;
}
