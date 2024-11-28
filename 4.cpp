#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(int i=0; i<100; i+=10){
	for(int j=1; j<=10; j+=2)
	printf("%d\t", (i+j));
	printf("\n");
}
	return 0;
}
