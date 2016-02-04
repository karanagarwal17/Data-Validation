#include<stdio.h>
#include<ctype.h>
#include"functions.h"
#define RANGE 80

int main()
    {
        // calling different functions through main depending on the user input
        int i=0,p=0;
        char b[20];
        char a[RANGE];
        printf("\nWelcome to the project on Data Validation\n\nSelect the type of data validation\n\t1.Data Type Check\n\t2.Range Check\n\t3.Length Check\n\t4.Format Check\n\t5.Divisibility Check\n\t6.Email id Check\n\n");
        scanf("%s",b);
        i=b[0]-'0';
        //if the user does not input the options correctly, we'll re ask the user by the following loop
        while(i>6||i<1||b[1]!='\0')
        {
            printf("Enter a no. between 1 to 6\n");
            scanf("%s",b);
            i=b[0]-'0';
        }
        // a switch for calling the functions
        switch(i)
        {
            case(1):
                {
                    p=datatype(a,0);
                }break;
            case(2):
                {
                    p=range(a,0);
                }break;
            case(3):
                {
                    p=length(a,0);
                }break;
            case(4):
                {
                    p=format(a,0);
                }break;
            case(5):
                {
                    p=divisible(0,0);
                }break;
            case(6):
                {
                    p=email(a);
                    printf("The email-id is valid\n");
                }
        }
        return 0;
    }
