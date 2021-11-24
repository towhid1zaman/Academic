#include <stdio.h>
#include <string.h>

int main()
{
    char alpha, beta;
    char non_terminal;
    int num;
    char production [10][10];
    int index = 3;

    printf("Enter Number of production: ");
    scanf("%d", &num);
    printf("Enter the grammer as E->E-A : \n");
    for(int i=0; i<num; i++)
    {
        scanf("%s", production[i]);
    }

    for(int i=0; i<num; i++)
    {
        printf("\nGrammer: %s", production[i]);
        non_terminal = production[i][0];
        if(non_terminal == production[i][index])
        {
            printf(" is left recursive.\n");
            alpha = production[i][index+1];
            while(production[i][index]!=0 && production[i][index]!='|')
                index++;
            if(production[i][index]!=0)
            {
                beta = production[i][index+1];
                printf("Grammer without left recursion: ");
                printf("\n%c->%c%c\'", non_terminal, beta, non_terminal);
                printf("\n%c\'->", non_terminal);
                index=4;
                while(production[i][index] != '|')
                {
                    printf("%c", production[i][index]);
                    index++;
                }
                printf("%c\'|epc\n", non_terminal);
            }
            else
                printf("Cann't be reduced\n");
        }
        else
        {
            printf(" is not left recursive.\n");
        }
        index = 3;
    }
    return 0;
}

/*
E->E+*abT|T
T->T*F|F
F->id

E->E+|T
T->Tx|F
F->id

*/
