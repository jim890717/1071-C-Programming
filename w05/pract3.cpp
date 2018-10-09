#include <stdio.h>

int prachar(char c,int n)
{
    for(int i=1; i<=n; i++)
    {

        printf("%c",c);

    }



}


int main()
{
    int height;
    printf("Enter height(-1 to exit):");
    scanf("%d",&height);
    if(height>0)
    {
        for(int i=1; i<=height; i++)
        {

            prachar(' ',height-i);
            prachar('*',i);
            printf("  ");
            prachar('*',i);

            printf("\n");

        }



    }
    else
    {
        printf("輸入正數");
    }





}



