#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int SubNum;
    int  SubNumN, EachSubMarksN;
    char SelctTVal;
    float TMarks, Percent;

    // Loop controllers below
    int i, j;
    int TAdd, FAdd;
    float RandomAdd = 0;

    printf ("\nDoes each of your subject contains 100 marks?\n");
    printf ("\t[ y = yes or n = no ]\n> ");
    scanf ("%c", &SelctTVal);

    switch (SelctTVal)
    {
    case 'y' :

       printf ("\n\nNow please, \nEnter the Full marks : ");
        scanf ("%f", &TMarks);

        SubNum = TMarks / 100;

        printf ("\n\n\t\t\t\tPlease Wait.....Calculating!");
        printf ("\n\n");
        for (int i = 0; i < 100; i++){
            Sleep (12);
            printf ("%c", 219);
    }
        printf ("\nNo. of subjects = %d", SubNum);

        printf ("\nEnter marks obtained in Each Subject One By One\nOut of 100marks :\n");
        for (i = 1; i <= SubNum; i++)
    {
        printf  ("\nMarks obtainted in Subject %d = ", i);
        scanf   ("%d", &TAdd);

        if (TAdd <= 100)
        {
        RandomAdd = RandomAdd + (TAdd * 1.0);
    } else {
        printf  ("Error Occured!");
        break;
    }
    }
        if (RandomAdd <= TMarks)   // and operator isnt working here ask mam
        {
        printf ("\nTotal Marks = %.1f / %.1f", RandomAdd, TMarks);

    Percent = RandomAdd * 100 / TMarks;
    printf ("\nPercentage Obtained = %.2f%%", Percent);
    printf ("\n\nKeep Smiling :) \n");
        }
        break;

    case 'n' :

        printf ("Okay! \nPlease Enter the Number Of Subjects : ");
        scanf ("%d", &SubNumN);

        printf ("\nNow,\nEnter the Full Marks : ");
        scanf ("%f", &TMarks);

        if (SubNumN != 0 && TMarks != 0)
        {
        EachSubMarksN = TMarks / (SubNumN * 1.0);
        } else
        {
        printf("\n\n\t\t\t\tPlease Wait.....Erorring");
        printf("\n\n");
        for (int i = 0; i <100; i++){
            Sleep(12);
            printf("%c", 221);
        }
        printf("\n\nDon't Fool Yourself! and Try Again :)\n");
            break;
        }
        printf ("\n\n\t\t\t\tPlease Wait.....Calculating!");
        printf ("\n\n");
        for (int i = 0; i <100; i++){
            Sleep (12);
            printf ("%c", 219);
    }
        printf ("\nSo, \nEach subject contains = %dmarks", EachSubMarksN);

        printf ("\nEnter Marks in Each Subject One By One\nOut of %dmarks :\n", EachSubMarksN);
        for (j = 1; j <= SubNumN; j++)
    {
        printf  ("\nMarks obtainted in Subject %d = ", j);
        scanf   ("%d", &FAdd);

        if (FAdd <= EachSubMarksN)
        {
        RandomAdd = RandomAdd + (FAdd * 1.0);
    } else {
        printf  ("Error Occured!");
        break;
    }
    }
        if (RandomAdd <= TMarks)
        {
        printf ("\nTotal Obtained Marks = %.1f / %.1f", RandomAdd, TMarks );

    Percent = RandomAdd * 100 / TMarks;
    printf ("\nPercentage obtained = %.2f%%", Percent);
    printf ("\n\nKeep Smiling :) \n");
        }
        break;

    default :

        printf("Sorry, Please Enter A Valid Input!");
        printf("\n\tSo Let's! Try Again.. :) ");
        break;
    }

    return 0;
}
