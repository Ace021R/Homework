#include<stdio.h>
int main () {

	int Zahl1, Zahl2, Zahl3;
	int Min;	


		printf("geben Sie die Zahl1 ein: ");
		scanf("%d", &Zahl1);
		printf("geben Sie die Zahl2 ein: ");
		scanf("%d", &Zahl2);
		printf("geben Sie die Zahl3 ein: ");
		scanf("%d", &Zahl3);



 	
	if(Zahl1 < Zahl2 && Zahl1 < Zahl3){
		Min = Zahl1;

	}else if(Zahl2 < Zahl3 && Zahl2 < Zahl1){
		Min = Zahl2;

	}else if(Zahl3 < Zahl1 && Zahl3 < Zahl2){
		Min = Zahl3;

	}else{
		printf("Alle Zahlen sind gleich");}


		printf("Minimum: %d\n", Min);
return 0;
}
