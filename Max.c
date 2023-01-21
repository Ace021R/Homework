#include<stdio.h>
int main() {

	int a;
	int b;
	int c;
	int Max;

	printf("Geben Sie bitte die Zahl1 ein: ");
	scanf("%d", &a);
	printf("Geben Sie bitte die Zahl2 ein: ");
	scanf("%d", &b);
	printf("Geben Sie bitte die Zahl3 ein: ");
	scanf("%d", &c);

	if(a>b && a>c){
		Max = a;
	}else if(b>a && b>c){
		Max = b;
	}else if(c>a && c>b){
		Max = c;
	}else{
		Max = 0;}
printf("Maximum: %d\n",Max);

}
