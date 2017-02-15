#pragma once



netto() {

	int brutto;
	float mwst = 0.00, erg = 0.00;
	printf("Bitte geben die ihren Brutto Betrag ein: \n");
	scanf("%i", &brutto);
	printf("Bitte geben die ihre Umsatzsteuer ein: \n");
	scanf("%i", &mwst);

	erg = brutto / (1 + mwst);

	printf("Bruttobetrag\t%i\n"
		"Steuersatz\t%f\n"
		"Nettobetrag\t%.2f\n", brutto, mwst, erg);





	return 0;

}