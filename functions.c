#include<stdio.h>
#include<ctype.h>
#include"functions.h"
#define RANGE 80

int datatypecheck(char *a,int x)
    {
        // function for checking the datatype
        int i,count=0;
        //switch for different operations
        switch(x)
        {
        case(1):
            {
                printf("Enter the numbers\n");
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(isdigit(a[i]))
                        ;
                    else
                        return 0;
                }
                return 1;
            }break;
        case(2):
            {
                printf("Enter the string\n");
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(((a[i]-'A')>=0)&&((a[i]-'A')<26))
                        ;
                    else
                        return 0;
                }
                return 1;
            }break;
        case(3):
            {
                printf("Enter the string\n");
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(((a[i]-'a')>=0)&&((a[i]-'a')<26))
                        ;
                    else
                        return 0;
                }
                return 1;
            }break;
        case(4):
            {
                printf("Enter the String\n");
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(isalpha(a[i]))
                        ;
                    else
                        return 0;
                }
                return 1;
            }break;
        case(5):
            {
                printf("Enter the numbers\n");
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(isdigit(a[i])||a[i]=='.')
                        {
                            if(a[i]=='.')
                                count++;
                        }
                    else
                        return 0;
                }
                if((count==1)&&(i>1))
                    return 1;
            }break;
        }
    }

int datatype(char *a,int x)
    {
    int i=0;
    char b[20];
    // if the value of x is passed by the calling function, then it uses that, otherwise it asks the user for the options
    if(x<1||x>5)
    {
        printf("Check the datatype for?\n\t1.Digits\n\t2.Capital alphabets\n\t3.Small Alphabets\n\t4.Mixed Case\n\t5.Decimals\n\n");
        scanf("%s",b);
        x=b[0]-'0';
    }
    //if the user does not input the options correctly, we'll re ask the user by the following code
    if(x>5||x<1||b[1]!='\0')
    {
        printf("Enter a number between 1 to 5\n");
        scanf("%s",b);
        x=b[0]-'0';
    }
    //calling the sub-function
    while(i!=1)
    {
        i=datatypecheck(a,x);
    }
    printf("The datatype is correct");
    return 1;
    }

int rangecheck(char *a,int x)
    {
        int y=0,z,c=0,i;
        switch(x)
        {
        case(1):
            {
                printf("Enter the date\n");
                scanf("%s",a);
                if((a[1]=='\0')&&(isdigit(a[0])))
                {
                    y+=(a[0]-'0');
                    if((y>1)&&(y<10))
                        return 1;
                    else
                        return 0;
                }
                else if((a[2]=='\0')&&(isdigit(a[0]))&&(isdigit(a[1])))
                {
                    y+=(a[0]-'0');
                    y*=10;
                    y+=(a[1]-'0');
                    if((y>1)&&(y<32))
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
            }break;
        case(2):
            {
                printf("Enter the month\n");
                scanf("%s",a);
                if((a[1]=='\0')&&(isdigit(a[0])))
                {
                    y+=(a[0]-'0');
                    if((y>1)&&(y<10))
                        return 1;
                    else
                        return 0;
                }
                else if((a[2]=='\0')&&(isdigit(a[0]))&&(isdigit(a[1])))
                {
                    y+=(a[0]-'0');
                    y*=10;
                    y+=(a[1]-'0');
                    if((y>1)&&(y<13))
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
            }break;
        case(3):
            {
                printf("Enter the hour\n");
                scanf("%s",a);
                if((a[1]=='\0')&&(isdigit(a[0])))
                {
                    y+=(a[0]-'0');
                    if((y>1)&&(y<10))
                        return 1;
                    else
                        return 0;
                }
                else if((a[2]=='\0')&&(isdigit(a[0]))&&(isdigit(a[1])))
                {
                    y+=(a[0]-'0');
                    y*=10;
                    y+=(a[1]-'0');
                    if((y>1)&&(y<24))
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
            }break;
        case(4):
            {
                printf("Enter the minutes\n");
                scanf("%s",a);
                if((a[1]=='\0')&&(isdigit(a[0])))
                {
                    y+=(a[0]-'0');
                    if((y>1)&&(y<10))
                        return 1;
                    else
                        return 0;
                }
                else if((a[2]=='\0')&&(isdigit(a[0]))&&(isdigit(a[1])))
                {
                    y+=(a[0]-'0');
                    y*=10;
                    y+=(a[1]-'0');
                    if((y>1)&&(y<60))
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
            }break;
        case(5):
            {
                printf("Enter the seconds\n");
                scanf("%s",a);
                if((a[1]=='\0')&&(isdigit(a[0])))
                {
                    y+=(a[0]-'0');
                    if((y>1)&&(y<10))
                        return 1;
                    else
                        return 0;
                }
                else if((a[2]=='\0')&&(isdigit(a[0]))&&(isdigit(a[1])))
                {
                    y+=(a[0]-'0');
                    y*=10;
                    y+=(a[1]-'0');
                    if((y>1)&&(y<60))
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
            }break;
        case(6):
            {
                printf("Enter the range of numbers in the form x y\n");
                scanf("%d %d",&y,&z);
                printf("enter the no. to be checked\n");
                scanf("%s",a);
                for(i=0;isdigit(a[i])==1;i++)
                    {
                        c*=10;
                        c+=(a[i]-'0');
                    }
                if((z>=c&&y<=c)||(z<=c&&y>=c))
                    return 1;
                else
                    return 0;
            }break;
        }
    }

int range(char *a,int x)
    {
        int i=0;
        char b[20];
        // if the value of x is passed by the calling function, then it uses that, otherwise it asks the user for the options
        if(x<1||x>6)
        {
        printf("Check the Range for?\n\t1.Date\n\t2.Month\n\t3.Hour\n\t4.Minutes\n\t5.Seconds\n\t6.Custom Input\n\n");
        scanf("%s",b);
        x=b[0]-'0';
        }
        //if the user does not input the options correctly, we'll re ask the user by the following code
        if(x>6||x<1||b[1]!='\0')
        {
            printf("Enter a number between 1 to 6\n");
            scanf("%s",b);
            x=b[0]-'0';
        }
        //calling the sub-function
        while(i!=1)
        {
        i=rangecheck(a,x);
        }
        printf("The range is correct");
        return i;
    }

int lengthcheck(char *a,int x)
    {
        int j,k,count=0,y;
        switch(x)
        {
        case(1):
            {
                printf("Enter the mobile No.\n");
                scanf("%s",a);
                for(j=0;a[j]!='\0';j++)
                {
                    if(isdigit(a[j])||a[j]=='-')
                    {
                        if(isdigit(a[j]))
                        {
                            count++;
                        }
                    }
                    else
                        return 0;
                }
                if(count==10)
                {
                   return 1;
                }
            }break;
        case(2):
            {
                printf("Enter the mobile No.\n");
                scanf("%s",a);
                for(j=0;a[j]!='\0';j++)
                {
                    if(isdigit(a[j])||a[j]=='-'||a[j]=='+')
                    {
                        if(isdigit(a[j]))
                        {
                            count++;
                        }
                    }
                    else
                        return 0;
                }
                for(j=1;a[j]!='\0';j++)
                {
                    if(a[j]=='+')
                        return 0;
                }
                if(count==12)
                   return 1;
                else
                    return 0;
            }break;
        case(3):
            {
                printf("Enter the Bank Account No.\n");
                scanf("%s",a);
                for(j=0;a[j]!='\0';j++)
                {
                    if(isdigit(a[j]))
                    {
                        count++;
                    }
                    else
                        return 0;
                }
                if(count==11)
                {
                   return 1;
                }
            }break;
        case(4):
            {
                printf("Enter the length\n");
                scanf("%d",&y);
                printf("Enter the no.\n");
                scanf("%s",a);
                for(j=0;a[j]!='\0';j++)
                {
                    if(isdigit(a[j]))
                    {
                        count++;
                    }
                    else
                        return 0;
                }
                if(count==y)
                   return 1;
                else
                    return 0;
            }break;
        }
    }

int length(char *a,int x)
    {
        int i=0;
        char b[20];
        // if the value of x is passed by the calling function, then it uses that, otherwise it asks the user for the options
        if(x<1||x>4)
        {
        printf("Check the length for?\n\t1.Mobile No.\n\t2.Mobile No. with country Code\n\t3.Bank Account No.\n\t4.User input length\n\n");
        scanf("%s",b);
        x=b[0]-'0';
        }
        //if the user does not input the options correctly, we'll re ask the user by the following code
        if(x>4||x<1||b[1]!='\0')
        {
            printf("Enter a number between 1 to 4\n");
            scanf("%s",b);
            x=b[0]-'0';
        }
        //calling the sub-function
        while(i!=1)
        {
            i=lengthcheck(a,x);
        }
        printf("The length is correct");
        return 1;
    }

int formatcheck(char *a,int x)
    {
        int d=0,m=0,y=0;
        switch(x)
        {
        case(1):
            {
                printf("Enter the date\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7]))&&(isdigit(a[8]))&&(isdigit(a[9])))
                {
                if((a[2]=='/')&&(a[5]=='/')&&(a[10]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    y+=(a[6]-'0');
                    y*=10;
                    y+=(a[7]-'0');
                    y*=10;
                    y+=(a[8]-'0');
                    y*=10;
                    y+=(a[9]-'0');
                    if((y>=1800)&&(y<=2015))
                    {
                    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<32))
                        return 1;
                    else if((m==4||m==6||m==9||m==11)&&(d<31))
                        return 1;
                    else if((m==2)&&(d<29))
                        return 1;
                    }
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        case(2):
            {
                printf("Enter the date\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7])))
                {
                if((a[2]=='/')&&(a[5]=='/')&&(a[8]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    y+=(a[6]-'0');
                    y*=10;
                    y+=(a[7]-'0');
                    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<32))
                        return 1;
                    else if((m==4||m==6||m==9||m==11)&&(d<31))
                        return 1;
                    else if((m==2)&&(d<29))
                        return 1;
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        case(3):
            {
                printf("Enter the date\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7]))&&(isdigit(a[8]))&&(isdigit(a[9])))
                {
                if((a[2]=='-')&&(a[5]=='-')&&(a[10]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    y+=(a[6]-'0');
                    y*=10;
                    y+=(a[7]-'0');
                    y*=10;
                    y+=(a[8]-'0');
                    y*=10;
                    y+=(a[9]-'0');
                    if((y>=1800)&&(y<=2015))
                    {
                    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<32))
                        return 1;
                    else if((m==4||m==6||m==9||m==11)&&(d<31))
                        return 1;
                    else if((m==2)&&(d<29))
                        return 1;
                    }
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        case(4):
            {
                printf("Enter the date\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7])))
                {
                if((a[2]=='-')&&(a[5]=='-')&&(a[8]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<32))
                        return 1;
                    else if((m==4||m==6||m==9||m==11)&&(d<31))
                        return 1;
                    else if((m==2)&&(d<29))
                        return 1;
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        case(5):
            {
                printf("Enter the time\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7])))
                {
                if((a[2]=='/')&&(a[5]=='/')&&(a[8]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    y+=(a[6]-'0');
                    y*=10;
                    y+=(a[7]-'0');
                    if(d<24&&m<60&&y<60)
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        case(6):
            {
                printf("Enter the time\n");
                scanf("%s",a);
                if((isdigit(a[0]))&&(isdigit(a[1]))&&(isdigit(a[3]))&&(isdigit(a[4]))&&(isdigit(a[6]))&&(isdigit(a[7])))
                {
                if((a[2]==':')&&(a[5]==':')&&(a[8]=='\0'))
                {
                    d+=(a[0]-'0');
                    d*=10;
                    d+=(a[1]-'0');
                    m+=(a[3]-'0');
                    m*=10;
                    m+=(a[4]-'0');
                    y+=(a[6]-'0');
                    y*=10;
                    y+=(a[7]-'0');
                    if(d<24&&m<60&&y<60)
                        return 1;
                    else
                        return 0;
                }
                else
                    return 0;
                }
                else
                    return 0;
            }break;
        }
    }

int format(char *a,int x)
    {
        int i;
        char b[20];
        // if the value of x is passed by the calling function, then it uses that, otherwise it asks the user for the options
        if(x<1||x>6)
        {
        printf("Check the format for?\n\t1.DD/MM/YYYY\n\t2.DD/MM/YY\n\t3.DD-MM-YYYY\n\t4.DD-MM-YY\n\t5.HH/MM/SS\n\t6.HH:MM:SS\n\n");
        scanf("%s",b);
        x=b[0]-'0';
        }
        //if the user does not input the options correctly, we'll re ask the user by the following code
        if(x>6||x<1||b[1]!='\0')
        {
            printf("Enter a no. between 1 to 6\n4");
            scanf("%s",b);
            x=b[0]-'0';
        }
        //calling the sub-function
        while(i!=1)
        {
            i=formatcheck(a,x);
        }
        printf("The Format is correct");
    }

int divisible(int x,int y)
    {
        int i;
        while(x==0||y==0)
        {
        printf("Enter the numbers\n");
        scanf("%d %d",&x,&y);
        }
        if(x==y)
            return 1;
        if(x%y==0)
        {
            printf("The Numbers are divisible\n");
            return 1;
        }
        else
        {
            printf("The numbers are non divisible\n");
            return 0;
        }
    }

int email(char *a)
    {
        int i,c=0,d=0,e=0;
        while(e!=1)
        {
        c=0;
        d=0;
        e=0;
        printf("Enter the E-mail Id\n");
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(isalpha(a[i])||a[i]=='.'||a[i]=='@'||isdigit(a[i]))
                {
                    if(a[i]=='@')
                        c++;
                    else if(a[i]=='.')
                        d++;
                }
            else
            {
                e=0;
                break;
            }
            if(c==1&&d>0)
                e=1;
            else
                e=0;
        }
        }
        return 1;
    }
