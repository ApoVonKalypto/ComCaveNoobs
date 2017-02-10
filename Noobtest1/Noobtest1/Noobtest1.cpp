// Noobtest1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main() {

	int a = 0, b = 0, c = 0, d = 0;
	printf("Gib nacheinander 3 Zahlen ein\n");
	printf("Bitte Zahl eins Eingeben(n) ");
	scanf("%i", &a);
	 
	printf("Sie haben bisher Eingegeben %i %i %i\n", a, b, c);

	printf("Bitte Zahl zwei Eingeben(n) ");
	scanf("%i", &b);

	printf("Sie haben bisher Eingegeben %i %i %i\n", a, b, c);

	printf("Bitte Zahl drei Eingeben(n) ");
	scanf("%i", &c);

	printf("Sie haben komplett Eingegeben\n %i\n %i\n %i\n \n", a, b, c);
	d = a + b + c;
	printf("Addiert macht das: ");
	printf(" %i \n \n", d);



	return 0;
}