// BMI.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include<stdio.h>


int main()
{
	//Ausgabe; "Bitte geben sie ihr Körpergewicht in kg ihre Groesse in cm und ihr Geschlecht an."
	
	
	//int koerpergewicht, bmi
	int koerpergewicht = 0, bmi = 0;
	//float groesse
	float groesse = 0.00;
	//char geschlecht
	char geschlecht = ' ';
	//Hier Berechne den BMI
	//Ausgabe; "Bitte geben sie ihr Körpergewicht in kg ihre Groesse in cm und ihr Geschlecht w= Weiblich M=Maennlich an."
	printf("Bitte geben sie ihr Koerpergewicht in kg ihre Groesse"
		"in cm und ihr Geschlecht W=Weiblich M=Maennnlich an\n");
	scanf("%i", &koerpergewicht);
	scanf("%f", &groesse);
	scanf("%c", &geschlecht);

	//Hier Berechne den BMI
	bmi = koerpergewicht / ((groesse / 100) * (groesse / 100));
		//WENN (geschlecht = 109 || geschlecht == 77)
	if (geschlecht = 109 || geschlecht == 77)
		{//ist der Mann
		 //DANN (bmi < 20)
		if (bmi < 20)
		{	//DANN Ausgabe von Untergewicht BMI Wert
			printf("Du hast Untergwicht als Mann und dein BMI lautet %i", bmi);

		}//ENDE WENN
				//SONST WENN (bmi >19 && bmi < 25)
		else if (bmi >19 && bmi < 25)
		{	//Ausgabe von Normalgewicht BMI Wert
			printf("Du hast Normalgewicht dein BMI ist %i", bmi);
		}//ENDE WENN
				//SONST WENN (bmi > 25 && bmi < 31)
		else if (bmi > 25 && bmi < 31)
		{	//Ausgabe von Übergewicht BMI Wert
			printf("Du hast einige Pfunde zuviel du fette Sau"
				"und bist Uebergewichtig mit einem BMI von %i", bmi);
		}//ENDE WENN
	}//Ist die Frau
	 //DANN (bmi < 19)
	else if (bmi <19)
	{	//DANN Ausgabe von Untergewicht BMI Wert
		printf(" Du hast untergewicht bist eine Frau und dein BMI ist %i", bmi);
	}//ENDE WENN
				//SONST WENN (bmi >18 && bmi < 25
	else if (bmi > 18 && bmi < 25)
	{	//Ausgabe von Normalgewicht BMI Wert
		printf("Du hast Normalgewicht als Frau mit einem BMI von %i", bmi);
	}//ENDE WENN
				//SONST WENN (bmi > 24 && bmi < 31)
	else if (bmi > 24 && bmi < 31)
	{	//Ausgabe von Übergewicht BMI Wert
		printf("Du hast Uebergewicht als Frau mit einem BMI von %i", bmi);
	}//ENDE WENN
	
	//ENDE WENN
	//EXIT
		    return 0;
}

