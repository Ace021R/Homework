#include<stdio.h>
#include<string.h>


int main(){

char zerlegen[] = "C:\\Eigene Datein\\FOM\\C-Code\\main.c";

printf("\nvorher: %s\n", zerlegen);

	char *z1 = strrchr (zerlegen, '.');
	char *z2 = strrchr (zerlegen, '\\');
	
	*z2 = '\0'; //poniter funktion

	printf("\n\n\n");
	printf("Extention:     %s\n", z1+1);
	printf("Dateiname:     %s\n", z2+1);
	printf("Verzeichnes:   %s\n", zerlegen);

return 0;
}
