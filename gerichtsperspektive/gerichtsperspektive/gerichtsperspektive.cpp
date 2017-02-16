// gerichtsperspektive.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//vorzeichenlos int alter = 14
	unsigned short alter = 0;
	printf("Bitte geben sie ihr Alter ein: \n");
	//Eingabe: "Zahl"
	scanf("%u", &alter);
	//WENN (alter < 21 && alter >= 18)
	if (alter < 21 && alter >= 18)
	{
		//Ausgabe:"Heranwachsender"
		printf("Heranwachsender\n");
	}//ENDE WENN

	//WENN(alter >= 14 && alter <18)
	if (alter >= 14 && alter <18)
	{
		//Ausgabe:"Jugendlicher"
		printf("Jugendlicher\n");
	}//ENDE WENN

	//WENN (alter  < 14)
	if (alter  < 14)
	{
		//Ausgabe:"Kind"
		printf("Kind\n");
	}//ENDE WENN

	//WENN (alter > 21)
	if (alter > 21)
	{
		//Ausgabe: "Ich bin ja so ein alter Sack"
		printf("Ich bin ja so ein alter Sack\n");
	}//ENDE WENN
 
	
	


	//WENN (alter<21 && alter >= 18)

	if (alter<21 && alter >= 18)
	{	
		//Ausgabe: "Heranwachsender"
		printf("Heranwachsender\n");
	}//ENDEWENN
	//DANN WENN (alter >= 14 && alter < 18)
	else if (alter >= 14 && alter < 18)
	{	
		//Ausgabe: "Ich bin Jugendlicher"
		printf("Ich bin Jugendlich\n");
	}//ENDE WENN
	//ENDE DANN (alter <14)
	else if (alter <14)
	{	
		//Ausgabe: "Ich bin ein Kind"
		printf("Ich bin ein Kind\n");
	}//ENDE WENN

	//SONST
	else {
		//Ausgabe : "Ich bin Erwachsener"
		printf("Ich bin Erwachsener\n");
	}
	//ENDE WENN

	
	
	
	
	
	return 0;
}

