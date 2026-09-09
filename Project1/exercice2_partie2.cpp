#include <iostream>
#include <random>
#include <stdio.h>

int main() {

	char caractere[30];
	int l = 0;
	int count = 0;
	int espace = 0;

	for (int i = 0;30 > i; i++) {
		scanf_s("%c", &caractere[i]);
		if (caractere[i] == '\n') {
			break;
		}
		l++;
	}
	
	for (int b = 0; l > b;b++) {
		if (caractere[b] == 32) {
			espace++;
		}
		else(count++);
	}
	count = count - 1;

	printf("le nombre de caractere est de %d et le nombre d'espace est de %d", p, e);

return 0;
}
