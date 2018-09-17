#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	double x1,x2;
	double D;
	printf("輸入a,b,c=");
	scanf("%d %d %d",&a,&b,&c);
	printf("For equation %dx^+%dx+%d=\n",a,b,c);
	D=b*b-4*a*c;
	if(D>=0){
		x1=(-b+(sqrt(D)))/(2*a);
		x2=(-b-(sqrt(D)))/(2*a);
	}
	else{
		printf("沒有平方根");
	}
	printf("x1=%.1f\n",x1);
	printf("x2=%.1f\n",x2);
	
} 

