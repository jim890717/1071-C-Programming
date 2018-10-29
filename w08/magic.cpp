#include <stdio.h>

#define MAX 50

void prArr(int m[][MAX],int N)
{

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%3d ",m[i][j]);

        }
        printf("\n");
    }
    printf("\n");

}

int magic_diag(int m[][MAX],int N)
{

    int row=N-1;
    int col=N/2;

    m[row][col]=1;

    for(int i=2; i<=N*N; i++)
    {
        if(i%N==1)
        {
            row=(row-1+N)%N;

        }
        else
        {
            col=(col+1+N)%N;
            row=(row+1+N)%N;

        }
        m[row][col]=i;

    }
}

int magic_knight(int k[][MAX],int X)
{

    int row1=X-1;
    int col1=X/2;
    k[row1][col1]=1;

    for(int i=2; i<=X*X; i++)
    {
        if(i%X==1)
        {
            row1=(row1-1+X)%X;

        }
        else
        {
            col1=(col1+1+X)%X;
            row1=(row1-2+X)%X;

        }
        k[row1][col1]=i;

    }



}


int main()
{

    int m[MAX][MAX]= {0};
    int N=5;

    prArr(m,N);

    magic_diag(m,N);
    prArr(m,N);

    magic_knight(m,N);
    prArr(m,N);






}
