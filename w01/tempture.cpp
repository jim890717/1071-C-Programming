#include <stdio.h>

int main(){
	float C,F;
	printf("��J�@�����ū� C=");
	scanf("%f,C",&C);
	F=C*9/5+32;
	printf("%.1f C=%.1f F\n",C,F);
	
    printf("��J�@�ӵؤ�ū� F=");
	scanf("%f,F",&F);
	C=(F-32)*5/9 ;
	printf("%.1f F=%.1f C",F,C);	

}
/*��J�@�ӷū� C
20.5 C=68.5F
��J�@�ӷū� F
80.5 F=26.9 C*/


