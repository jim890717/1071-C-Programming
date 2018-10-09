#include <stdio.h>

int prachar(char c,int n)
{
    for(int i=1; i<=n; i++)
    {

        printf("%c",c);

    }
}

int encode(int n)
{
    int o,w,t,f,fin;
    o=n/1000;
    w=(n%1000)/100;
    t=(n%100)/10;
    f=n%10;
    fin=w+((o+5)%10)*10+f*100+t*1000;

    return fin;
}

int decode(int n)
{
    int o,w,t,f,first;
    o=n/1000;
    w=(n%1000)/100;
    t=(n%100)/10;
    f=n%10;
    first=w+f*100+o*10+((t+5)%10)*1000;

    return first;

}



int main()
{

    int choice;
    int n1,n2,n3;
    int h1,h2;
    double BMI,weight1,weight2;
    int height;
    int x;

    while(1)
    {
        printf("1.Arithmetic Computation\n");
        printf("2.List BMI ranges\n");
        printf("3.Draw Four Vertical Triangles\n");
        printf("4.encode(n)\n");
        printf("5.decode(n)\n");
        printf("6.exit\n");
        printf("==>");
        scanf("%d",&choice);
        if(choice==6)break;


        switch(choice)
        {
        case 1:


            printf("Enter two integers:");
            scanf("%d %d",&n1,&n2);
            printf("%d+%d=%d\n",n1,n2,n1+n2);
            printf("%d-%d=%d\n",n1,n2,n1-n2);
            printf("%d*%d=%d\n",n1,n2,n1*n2);
            printf("%d/%d=%d\n",n1,n2,n1/n2);
            n3=n1%n2;
            printf("%d%c%d=%d\n",n1,'%',n2,n3);


            break;
        case 2:

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

            break;
        case 3:
            if(height>0)
            {
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
            }


            else
            {
                printf("輸入正數");
            }


            break;
        case 4:
            if(x>0)
            {
                printf("Enter N(-1 to exit):");
                scanf("%d",&x);
                printf("encode(%d)=%d\n",x,encode(x));
            }
            else


                break;
        case 5:
            if(x>0)
            {
                printf("Enter N(-1 to exit):");
                scanf("%d",&x);
                encode(x);
                printf("decode(%d)=%d\n",encode(x),decode(encode(x)));
            }
            else

                break;

        }

    }

}
