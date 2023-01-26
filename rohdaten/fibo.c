#include<stdio.h>

int main () {

int i = 1, f1=1, f0=0, x, n;
	
printf("geben sie einen zahl ein: \n");
scanf("%d", &n);

	
    for(i; i<=n; i++){
        if(i<=1)
            x = i;
        else{
            x=f1+f0;
            f0=f1;
            f1=x;
    }
}
	printf("%d\n", x);
	
return 0;
}

