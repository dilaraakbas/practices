#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n , fact=1;
	printf("Enter a number = ");
	scanf("%d", &n);
	for(int i; i<=n; i++)
	fact*=i;
	
	printf("%d\n" , fact);
	return 0;
}
