#include <stdio.h>

int sorting(int d[],int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            if(d[j]>d[j+1])
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }


        }
    }

}

int pri(int d[],int x)
{
    for(int i=0; i<x; i++)
    {
        printf("%3d",d[i]);
        if(i<x-1)
        {
            printf(",");
        }

    }
}



int main()
{

    int d[7]= {34,51,7,95,23,22,3};
    int n=7;
    int temp;

    printf("Original :");
    pri(d,n);

    printf("\n");

    sorting(d,n);

    printf("sorting  :");
    pri(d,n);

}
