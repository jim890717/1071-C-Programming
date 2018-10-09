#include <stdio.h>

int main()
{

    int h1,h2;
    double BMI,weight1,weight2;
    printf("Enter height(cm)(-1 to exit):");
    scanf("%d %d",&h1,&h2);

    if(h1>0&&h2>0)
    {
        for(int i=h1; i<=h2; i++)
        {
            printf("%4dcm :",i);

            weight1=24*i*i/10000;
            weight2=18.5*i*i/10000;
            printf("%2.1f~%2.1f",weight2,weight1);

            printf("\n");
        }
    }
    else
    {
        printf("輸入正數");
    }


}
