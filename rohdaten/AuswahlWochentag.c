#include<stdio.h>
#include<string.h>

int main () {

	    int i, tag;
		char * wochentage[7];

		wochentage [0] = "Montag";
		wochentage [1] = "Dienstag";
		wochentage [2] = "Mittwoch";
		wochentage [3] = "Donnerstag";
		wochentage [4] = "Freitag";
		wochentage [5] = "Samstag";
		wochentage [6] = "Sonntag";
		
    printf("Wählen Sie einen Tag aus (0-6): ");
    scanf("%d", &tag);

    printf("Heute ist %s\n", wochentage[tag]);
}

