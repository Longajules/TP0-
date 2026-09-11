/*#include <iostream>
#include <random>
#include <stdio.h>

int main() {

	int tab[100];
	int echange = 0;

	for (int i = 0; i < 100; i++) {
			printf("donnez valeur a triez :");
			scanf_s("%d", &tab[i]);

			if (tab[i] == -1) {

				break;
			}
	}
	for (int j = 0; j < 100; j++) {
		for (int i = 0; i < 100; i++) {

			if (tab[i] > tab[i + 1]) {

				echange = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = echange;
			}
		}
	}

	return 0;
}
*/