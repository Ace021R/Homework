#include<stdio.h>

int main ()  {
	int Alter;
	
	printf("Bitte geben Sie Ihre Alter ein: ");
	scanf("%d", &Alter);


	if(Alter<=17 && Alter>0){ 
		printf("\nKind/Jugendlicher\n");
	}else if(Alter<=67 && Alter>17){
		printf("Erwachsener ");
	}else if(Alter>67){
		printf("Rentner ");
	}else{
		printf("Kein gültiger eingabe");
	}
	
return 0;
}




















