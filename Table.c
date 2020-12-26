#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num,  Tem,  NatNum;
    NatNum = 1;

    printf("\t\t\t\t\t/////!! TABLE !!\\\\\\\\\\\ \n");
    printf("Enter the Number to get the table : ");
    scanf("%d", &Num);

    printf("Enter the term of the table : ");
    scanf("%d", &Tem);

    while(Num >= 1)
    {
    while (NatNum <= Tem)
    {
    printf("%d * %d = %d \n", Num, NatNum, Num*NatNum);
    NatNum++;

    }
    break;
    }
    printf("\n");
    printf("Enjoy! ^_^");
    printf("\n");

    return 0;
}

