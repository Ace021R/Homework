#include<stdio.h>
int main () {

	int Day;

	printf("geben Sie bitte von 1 bis 7 eine Zahl ein: ");
	scanf("%d", &Day);

		switch(Day) {
			case 1: printf("Day ist eine Montag");
			break;
			case 2: printf("Day ist ein Dienstag");
			break;
			case 3: printf("Day ist eine Mittwoch");
			break;
			case 4: printf("Day ist ein Donnerstag");
			break;
			case 5: printf("Day ist eine Freitag");
			break;
			case 6: printf("Day ist ein Samstag");
			break;
 			case 7: printf("Day ist ein Sonntag");
			break;
			default: printf("Bitte geben Sie eine Zahl von 1 bis 7 ein!");
			break;
				}
}
