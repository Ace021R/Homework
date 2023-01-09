#include<stdio.h>

int printFibo (int n)
{
 	static int f1= 0, f2= 1, f3;

	if(n > 0){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	printf("%d ", f3);
	printFibo(n - 1);
	}
}

int main() {
	
	int n;
	printf("Enter the number for fibonacci series:");
	scanf("%d", &n);
	printf("Fibonacci series for a given number: \n");
	printf("%d %d ", 0, 1);
	printFibo(n - 1); 
return 0;
}


