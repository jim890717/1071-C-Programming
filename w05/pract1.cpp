#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("Enter two integers:");
    scanf("%d %d",&n1,&n2);
    printf("%d+%d=%d\n",n1,n2,n1+n2);
    printf("%d-%d=%d\n",n1,n2,n1-n2);
    printf("%d*%d=%d\n",n1,n2,n1*n2);
    printf("%d/%d=%d\n",n1,n2,n1/n2);
    n3=n1%n2;
    printf("%d%c%d=%d\n",n1,'%',n2,n3);

}
