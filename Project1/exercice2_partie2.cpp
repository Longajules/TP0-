/*#include <iostream>
#include <random>
#include <stdio.h>

int main() {
	 
	char caractere[30];
	int lettre[26] = {0};
	int nbl = 0;
	int count = 0;
	int espace = 0;

	for (int i = 0;30 > i; i++) {
		scanf_s("%c", &caractere[i]);
		if (caractere[i] == '\n') {
			break;
		}
		nbl++;
	}
	
	for (int b = 0; nbl > b; b++) {
		if (caractere[b] == 32) {
			espace++;
		}
		else(count++);

		int resultat = 0;

		resultat = caractere[b] - 'a';

		lettre[resultat]++;
	}

	printf("le nombre de caractere est de %d et le nombre d'espace est de %d\n", count, espace);

	int b = 97;

	for (int i = 0; i < 26; i++) {

		

		(printf("il y a %d %c\n", lettre[i], b));
		b++;
	}

return 0;
}
*/