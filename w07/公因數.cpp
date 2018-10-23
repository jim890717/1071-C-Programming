#include <stdio.h>

int gcd(int x,int y)
{

    if(x==0)
        return y;
    else
        return gcd(y%x,x);


}

int rgcd(int a,int b)
{
    int y;
    for(int i=2; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
            y=i;

    }

    return y;

}


int main()
{

    printf("gcd(48,126)=%d\n",gcd(48,126));
    printf("rgcd(48,126)=%d\n",rgcd(48,126));

    printf("gcd(48,128)=%d\n",gcd(48,128));
    printf("rgcd(48,128)=%d\n",rgcd(48,128));

    printf("gcd(48,144)=%d\n",gcd(48,144));
    printf("rgcd(48,144)=%d\n",rgcd(48,144));

    printf("gcd(48,48)=%d\n",gcd(48,48));
    printf("rgcd(48,48)=%d\n",rgcd(48,48));


}
