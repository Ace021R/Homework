#include<stdio.h>
int main () {
	
int  n, result=1;
	
	printf("Bitte geben Sie eine Zahl ein: ");
	scanf("%d", &n);

	
	for(int i= 1; i<=n; i++) {
		result = result * i;
	}
printf("Das produkt von 1 bis %d ist %d\n", n, result);

return 0;
}

		
