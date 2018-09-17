#include <stdio.h>

int main(){
	float C,F;
	printf("块尼ん放 C=");
	scanf("%f,C",&C);
	F=C*9/5+32;
	printf("%.1f C=%.1f F\n",C,F);
	
    printf("块地ん放 F=");
	scanf("%f,F",&F);
	C=(F-32)*5/9 ;
	printf("%.1f F=%.1f C",F,C);	

}
/*块放 C
20.5 C=68.5F
块放 F
80.5 F=26.9 C*/


