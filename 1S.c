#include <stdio.h>

int main(void){
	char S[1000];
	int i;
	int countl=0;
	int countr=0;
	int tmp;

	scanf("%s",S);
	for(i=0;S[i]=='1';i++){	
		countl++;
	}
	tmp = i;
	for(i+=1;S[i]=='1';i++){
		countr++;
	}
	if(S[tmp]=='+'){
		printf("%d\n",countl + countr);
	}else if(S[tmp]=='-'){
		printf("%d\n",countl - countr);
	}
	return 0;
}