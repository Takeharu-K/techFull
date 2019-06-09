#include <stdio.h>

int main(void){
	int num;
	int i,j;

	scanf("%d",&num);
	if(num >= 1 && num <= 10000){
		for(i=0;i<num;i++){
			for(j=0;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}else{
		printf("Error\n");
	}
	return 0;
}
