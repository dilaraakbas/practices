#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n , sum=0;
	printf("Enter a number:");
	scanf("%d" , &n);
	for(int i=0; i<=n;i++)
	sum+=i;
	
	printf("%d\n" , sum);
	return 0;
}
