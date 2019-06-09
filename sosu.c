#include <stdio.h>
#include <time.h>
#include <math.h>

int isSosu(int i){
	int j;

	for(j=3;j<=sqrt(i);j+=2){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}

int main(void){
	clock_t s,e;
	int i;
	int count = 0;

	s = clock();
	for(i=3;i<100000000;i+=2){
		if(isSosu(i)){
			printf("%d\n",i);
			count++;
		}
	}
	e = clock();
	printf("素数総数：%d\n計算時間：%.3f秒\n",count,(double)(e-s)/CLOCKS_PER_SEC);
	return 0;
}
