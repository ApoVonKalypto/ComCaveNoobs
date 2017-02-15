#pragma once
#include<stdio.h>

int stromrechner() {

	float volt;
	float ohm;
	float ergwatt = 0.00;
	float ergma = 0.00;

	printf("----------Stromrechner----------\n");
	printf("Geben sie die Spannung in Volt an: \n");
	scanf("%f", &volt);

	printf("Geben sie den Wiederstand in Ohm an: \n");
	scanf("%f", &ohm);

	ergma = (volt / ohm);
	
	ergwatt = (volt * ergma);

	printf("Es fliesst ein strom von %.2f mA bei einer Leistung von %.2f Watt\n", ergma*1000, ergwatt);




	return 0;
}