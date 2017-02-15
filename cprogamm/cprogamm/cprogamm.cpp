// cprogamm.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include<stdio.h>



int main()
{
 
	

	unsigned int n = 0;
		
	printf("Bitte geben die eine drei Stellige Zahl ein:  \n");
	
	scanf("%3u", &n);

	n = n %256;//nur codes bis 256 zulassen
	printf("Das Zeichen %c\n", n);
	printf("Die Dezimalzahl %u\n", n);
	
	return 0;
}

