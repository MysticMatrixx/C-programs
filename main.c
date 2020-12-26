#include <stdio.h>
#include <stdlib.h>

int Fnt (int input);

int main()
{
        int  i, num1, num2;

        printf("[ Prime Numbers in a Inclusive Range ]\n\nSpecify Range >\nFrom : "); scanf("%d", &num1);
        printf("To : "); scanf("%d", &num2);

        printf("\nThe prime numbers from %d to %d are : \n\n>> ", num1, num2);
        for (i  = num1; i <= num2; i++)         // num1 == From  &&   num2 == To
        {
            if ( Fnt (i) == 0)
            printf("%d, ", i);
                }
                printf("\n\n");
return 0;
}

int Fnt (int input)
{
    int j;
    for (j = 2; j < input; j++)
    {
        if (input%j == 0)
        break;
    }
    if (j == input){
    return 0;}
}
