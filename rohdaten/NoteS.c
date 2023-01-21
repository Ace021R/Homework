#include<stdio.h>
int main () {

	int Note;
	Note <=10;

printf("Bitte geben Sie Ihre Punktzahl ein: ");
scanf("%d", &Note);

if (Note <=10) {
	switch(Note) {

		case 10: printf("Note ist sehr gut\n");
		break;
		case 9: printf("Note ist gut\n");
		break;
		case 8: printf("Note ist befriedigend\n");
		break;
		case 7: printf("Note ist ausreichend\n");
		break;
		case 6: printf("Note ist Mangelhaft\n");
		break;
		default: printf("Note ist ungenügend\n");
		break;
			}
}else{ printf("Ungültig");}
}
