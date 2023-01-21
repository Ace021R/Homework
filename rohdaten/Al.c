#include<stdio.h>

int main ()
{
	int f0=0, f1=1, n,i,erg; 

		printf("Geben sie n ein");
		scanf("%d", &n);

if (n == 0 || n==1){
	return n;
	}

for (i=2; i<=1; i++) {
	erg = f0 + f1;
	f0 =f1;
	f1 = erg;
	}
printf("Die %d.Fibonacci Zahl ist %d",n, f1);

}
