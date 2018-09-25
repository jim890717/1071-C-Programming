#include <stdio.h>

int main(){
	int weight,height;
    double b,h;
	printf("輸入身高(公分),體重:");
	scanf("%d,%d",&height,&weight);
	
	while(height>=0&&weight>=0){
		h=height/100.0;
	    b=weight/(h*h);
	    printf("你的BMI=%f",b);
		if(b<18.5){
			printf("體重過輕\n");
		}else if(b>=18.5&&b<24){
			printf("正常範圍\n");
		}else if(b>=24&&b<27){
			printf("過重\n");
		}else if(b>=27&&b<30){
			printf("輕度肥胖\n");
		}else if(b>=30&&b<35){
			printf("中度肥胖\n");
		}else if(b>=35){
			printf("重度肥胖\n");
		}
		printf("輸入身高(公分),體重:");
	    scanf("%d,%d",&height,&weight);
	}
	

}
