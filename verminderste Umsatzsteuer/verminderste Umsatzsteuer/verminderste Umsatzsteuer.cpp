// verminderste Umsatzsteuer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{	//Fliesskomma betrag = 0.00
	//int brutto =0
	//zeichen auswahl
	float betrag = 0.00;
	int brutto = 0;
	char auswahl;
	//Ausgabe:"Bitte geben sie einen Betrag ein"
	printf("Bitte geben sie einen Betrag ein: \n");
	//Eingabe: Betrag vom Benutzereinlesen
	scanf("%i", &betrag);
	//Ausgabe Zeilenumbruch
	printf("\n");
	//Ausgabe "Bitte geben die einen Steuersatz ein K fuer Kleidung
	//und L fuer Lebensmittel"
	printf("Bitte geben die einen Steuersatz ein K fuer Kleidung"
		"und L fuer Lebensmittel\n");
	scanf("%c", &auswahl);
	//WENN Auswahl == 76 || Auswahl == 108
	if (auswahl == 76 || auswahl == 108)
	{	//brutto =betrag *1.07
		brutto = betrag * 1.07;
		//Ausgabe von verminderten Steuersatz
		printf("Verminderter Steuersatz Lebensmittel = %5.2f\",betrag);

	}//WENN Auswahl ==107|| auswahl =75
	else if (auswahl == 107 || auswahl == 75)
	{
		brutto = betrag *1.19;
		printf("normaler Steuersatz Kleidung Gesammt = %5.2f", betrag);
	
	}//ENDE WENN

    return 0;
}

