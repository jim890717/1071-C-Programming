#include <stdio.h>
#include <ctype.h>


int leop(int year)
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


int main()
{

    int month,day;
    int year;
    int totday=0;
    char cont='Y';;


    int m[]= {31,28,31,30,31,30,31,31,30,31,30,31};


    while(cont=='Y')
    {
        printf("Enter year month day:");
        scanf("%d %d %d",&year,&month,&day);

        if(leop(year))
        {
            m[1]=m[1]+1;

            for(int i=0; i<month-1; i++)
            {
                totday=totday+m[i];

            }
            printf("%d days passed since 1/1/%d\n",totday+day,year);

        }
        else
        {

            for(int i=0; i<month-1; i++)
            {
                totday=totday+m[i];

            }
            printf("%d days passed since 1/1/%d\n",totday+day,year);

        }
        printf("continue??(Y/N)");
        getchar();
        cont=toupper(getchar());
        printf("\n");
        totday=0;




    }









}
