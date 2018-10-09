#include <stdio.h>


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
    if(x>0)
    {
        printf("Enter N(-1 to exit):");
        scanf("%d",&x);
        encode(x);
        printf("decode(%d)=%d\n",encode(x),decode(encode(x)));
    }
    else
    {
        printf("輸入正數");
    }

}
