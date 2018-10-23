#include <stdio.h>

int fid(int x){
    if(x==0||x==1)
        return x;
    else
        return fid(x-1)+fid(x-2);

}


int main(){

    int n;
    printf("fid(3)=%d\n",fid(3));
    printf("fid(10)=%d\n",fid(10));
    printf("fid(30)=%d\n",fid(30));

}
