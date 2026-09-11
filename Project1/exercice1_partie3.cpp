/*
#include <iostream>
#include <random>
#include <stdio.h>
#include <conio.h>

int main() {

	char mot_de_passe[30];
	char carac;
	int count = 0;

	printf("ecrivez mots de passe :\n");

	//fgets(mot_de_passe, 30, stdin);


	for (int i = 0; i < 30;i++) {
		carac = _getch();
		if (carac == '\r') {
		
			break;
		}
		else {
			printf("*");
			mot_de_passe[i] = carac;
		}
		count++;
	}

	printf("\n");
	
	for (int i = 0;i < count;i++) {

		printf("%c", mot_de_passe[i]);
	}

	return 0;
}
*/