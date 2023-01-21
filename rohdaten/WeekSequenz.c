#include<stdio.h>
int main () {

	int Sequenz;

printf("Eingabe Wochentag: ");
scanf("%d", &Sequenz);


	switch(Sequenz) {

		case 1:
		case 2:
		case 3: printf("Erste Wochenhälfte ");
		break;
		case 4:
		case 5: printf("Zweite Wochenhäfte ");
		break;
		case 6:
		case 7: printf("Wochenende hoch die Hände!"); break;
		default: printf("Geben Sie Wochentage in Form von Zahlen ein! ");
		break;
			}
}
