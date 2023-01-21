#include<stdio.h>

int main () {
	int a,b,c;
	
	printf("geben Sie bitte die Zahl a ein: \n");
	scanf("%d", &a);
	printf("geben Sie bitte die Zahl b ein: \n");
	scanf("%d", &b);	

	if (a == b) {
		printf("Das größte gemeinsamen Teiler von Zahl a und b ist %a");
	}else if (a > b) {
		c=a-b/b;
		printf("Das größte gemeinsamen teiler von a und b ist %c");
	}else{
		c= b-a/a;
		printf("Das größte gemeinsamen teiler von a und b ist c");
	}
}
