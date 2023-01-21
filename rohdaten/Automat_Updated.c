#include <stdio.h>

int main(){
	
	int auswahl = 0;
	float einwurf = 0;
	printf("\n Getränke Automat v0.2\n");
	printf("\n wählen Sie Ihre Getränk aus:\n 1. Wasser(0,50€)\n 2.Limo(1,00€)\n 3.Bier(2,00€)\n");
	printf("\n Wählen Sie Ihre Getränk aus: ");

	scanf("%d", &auswahl);


switch(auswahl){
	case 1: printf("\n Bitte werfen Sie 0,50€ ein: ");
		scanf("%f", &einwurf);
			if(einwurf == 0.5){
				printf("\n Vielen Dank, bitte entnehmen Sie Ihre Getränk.\n\n");
			}
			else{
				printf("\n nicht gültig!\n\n");
			}
	break;
	case 2: printf("\n Bitte werfen Sie 1,00€ ein: ");
		scanf("%f", &einwurf);
			if(einwurf == 1){
				printf("\n Vielen Dank, bitte entnehmen Sie Ihre Getränk.\n\n");
			}
			else{
				printf("\n nicht gültig!\n\n");
			}
	break;
	case 3: printf("\n Bitte werfen Sie 2,00€ ein: ");
		scanf("%f", &einwurf);
			if(einwurf == 2){
				printf("\n Vielen Dank, bitte entnehmen Sie Ihre Getränk.\n\n");
			}
			else{
				printf("\n nicht gültig!\n\n");
			}
	break;
		}
}
