#include<stdio.h>
#include<string.h>

int main () {

	

	char* produktnamen[4]= {
		"Bananen",
		"Äpfel",
		"Orange",
		"Birne",
	};

	float packung[4] = {250, 500, 750, 1000,};
	float preis[4] = {2, 4, 6, 8,};

	char* strncat(char** produktnamen, float* packung, float* preis);

	for(int i = 0; i<4; i++) { 

		printf("%s\n%.2f\n%.2f\n", produktnamen[i], packung[i], preis[i]);
	}

	return 0;
}
