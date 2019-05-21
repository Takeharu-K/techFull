#include <stdio.h>
#include "func.h"

int func(void){
	static int a; //static なので関数内で保持される
	a++;
	return a;
}

int main(void){
	printf("These are static variance\n");
	printf("%d\n",func());
	printf("%d\n",func());
	printf("%d\n",func());

	func2();
	//func1(); この関数はstaticで宣言されているのでmainから参照できない
}
