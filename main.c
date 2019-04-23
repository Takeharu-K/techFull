#include <stdio.h>
#include "func.h"

int func(void){
	static int a;
	a++;
	return a;
}

int main(void){
	printf("These are static variance\n");
	printf("%d\n",func());
	printf("%d\n",func());
	printf("%d\n",func());

	func2();
//	func1();
}
