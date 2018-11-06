#include <stdio.h>

int main()
{
    int x1,x2,fin;


    printf("Enter two integer:");
    scanf("%d %d",&x1,&x2);

    if(x1>=x2)
    {
        fin=x1-x2;
        printf("%d",fin);
    }
    else
    {
        fin=x2-x1;
        printf("%d",fin);
    }


}
