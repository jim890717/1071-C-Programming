#include <stdio.h>

int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	while(year>=0){
		if((year%4==0&&year%100!=0)||year%400==0){	
		   printf("year %d is a leap year\n",year);				
	       }
	    else{
		    printf("year %d is not a leap year\n",year);
	       }
		printf("Enter a year:");
	    scanf("%d",&year);
	}

		
}
