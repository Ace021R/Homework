#include<stdio.h>

int main ()  {
	int Alter;
	
	printf("Bitte geben Sie Ihre Alter ein: ");
	scanf("%d", &Alter);


	if(Alter<=17){ 
		printf("\nKind/Jugendlicher\n");
	}else if(Alter<=67){
		printf("Erwachsener ");
	}else{
		printf("Rentner ");}

}




















