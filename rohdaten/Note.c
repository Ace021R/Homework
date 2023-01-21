#include<stdio.h>
int main () {

	int Note;
	Note <=10;
		
		printf("\nGeben Sie bitte Ihr Punktzahl ein: ");
		scanf("%d", &Note);
	if(Note ==10){
		printf("\nsehr gut ");
	}else if(Note ==9){
		printf("\ngut ");
	}else if(Note ==8){
		printf("\nbefriedigend ");
	}else if(Note ==7){
		printf("\nausreichend ");
	}else if(Note ==6){
		printf("\nmangelhaft ");
	}else if(Note <=5){
		printf("\nungenuegend ");
	}else{
		printf("Diese Punktzahl existiert nicht! ");}

}
