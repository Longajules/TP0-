#include <iostream>
#include <random>

int main() {

	int age = 0;
	int r;
	int nc = 0;
	int s;
	int g = 0;

	//question pour l'ages

	for (int p = 0 ;p < 30;p++) {

		printf("quel est ton age ?\n");
		scanf_s("%d", &age);

		// question pour le sexe

		do {
			printf("quel est ton sexe ? 1 pour homme, 2 pour femme  \n");
			scanf_s("%d", &r);
		} while (r == 102 || r == 104);

		//question pour le cinema pars mois
		printf("combien de fois aller vous au cinema par mois ?\n");
		scanf_s("%d", &nc);

		printf("faites vous du sport ? 1 pour oui 2 pour non \n ");
		scanf_s("%d", &g);

		if (g == 1) {
			printf("quel sport fait tu ? \n 1-tennis \n 2-foot\n 3-escalade\n 4-danse\n 5-aquaponey\n 6-equitation sur une liconrne\n");
			scanf_s("%d", &s);
		}

		printf("Sont ages est de %d ans\n", age);
		if (r == 1) {

			printf("c'est un homme\n");
		}
		else(printf("c'est une femme\n"));

		printf("va au %d fois au cinema par mois\n", nc);

		if (g == 2) {
			printf("Ne fait pas de sport, gros feignant\n");

		}

		else if (s == 1) {
			printf("fait du tennis\n");
		}

		else if (s == 2) {
			printf("fait du foot\n");
		}

		else if (s == 3) {
			printf("fait de l'escalade\n");
		}

		else if (s == 4) {
			printf("fait de la dance\n");
		}

		else if (s == 5) {
			printf("fait de l'aquaponey\n");
		}

		else if (s == 6) {
			printf("fait de equitation sur une liconrne\n");
		}
	}
	return 0;
}