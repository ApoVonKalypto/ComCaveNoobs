#pragma once



netto() {

	float brutto;
	float mwst = 0, erg = 0.00;
	printf("Bitte geben die ihren Brutto Betrag ein: \n");
	scanf("%f", &brutto);
	printf("Bitte geben die ihre Umsatzsteuer ein: \n");
	scanf("%f", &mwst);

	erg = brutto / (1 + mwst);

	printf("Bruttobetrag\t%.2f\n"
		"Steuersatz\t%.0f\n"
		"Nettobetrag\t%.2f\n", brutto, mwst, erg);





	return 0;

}