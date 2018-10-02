#include <stdio.h>

void prachar(char c,int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c",c);
    }
}

void rectan(int height,int width,int filled)
{

    if(filled)
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height || j==1 || j==width)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }

    }



}

void drawvertri(int height,int type,int filled)
{
    switch(type)
    {
    case 1:

        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prachar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {

                if(i==1||i==height)
                {
                    prachar('*',i);
                }
                else
                {
                    printf("*");
                    prachar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }

        }
        break;
    case 2:
        if(filled)
        {
            for(int i=height; i>=1; i--)
            {
                prachar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=height; i>=1; i--)
            {

                if(i==1||i==height)
                {
                    prachar('*',i);
                }
                else
                {
                    printf("*");
                    prachar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }

        }
        break;
    case 3:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prachar(' ',5-i);
                prachar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {

                if(i==1||i==height)
                {
                    prachar(' ',5-i);
                    prachar('*',i);
                }
                else
                {
                    prachar(' ',5-i);
                    printf("*");
                    prachar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }

        }



        break;
    case 4:
        if(filled)
        {
            for(int i=height; i>=1; i--)
            {
                prachar(' ',5-i);
                prachar('*',i);
                printf("\n");
            }
        }
        else
        {
            for(int i=height; i>=1; i--)
            {

                if(i==1||i==height)
                {
                    prachar(' ',5-i);
                    prachar('*',i);
                }
                else
                {
                    prachar(' ',5-i);
                    printf("*");
                    prachar(' ',i-2);
                    printf("*");
                }
                printf("\n");
            }

        }
        break;

    }

}

int main()
{

    int choice,height,width,type,filled;


    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3)break;

        switch(choice)
        {

        case 1:
            printf("Enter height and width and filled:");
            scanf("%d %d %d",&height,&width,&filled);
            rectan(height,width,filled);


            break;

        case 2:
            printf("Enter height and type and filled:");
            scanf("%d %d %d",&height,&type,&filled);
            drawvertri(height,type,filled);

        }
        break;
    }


    return 0;
}
