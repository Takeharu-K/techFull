#include <stdio.h>

static void func1(void){
	printf("Hello static function!\n");
}

void func2(void){
	func1();
	printf("This is function2!\n");
}