#include <stdio.h>


int isLeap(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    {

        return 1;
    }
    else
    {
        return 0;
    }

}

int timeConvert(int hh,int mm,int ss)
{
    int sec;
    sec=3600*hh+60*mm+ss;
    return sec;
}

int main()
{

    int choice,year,hh,mm,ss,sec;


    while(1)
    {
        printf("Main Menu\n");
        printf("1. leap\n");
        printf("2. timeconvert\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3)break;

        switch(choice)
        {

        case 1:
            printf("Enter year:");
            scanf("%d",&year);
            if(isLeap(year)==1)
            {
                printf("year %d is a leap year",year);
            }
            else
            {
                printf("year %d is not a leap year",year);
            }

            break;

        case 2:
            printf("Enter hh and mm and ss:");
            scanf("%d:%d:%d",&hh,&mm,&ss);
            printf("%d:%d:%d=%d sec",hh,mm,ss,timeConvert(hh,mm,ss));
            break;

        }

    }

}
