#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char tab[1000];
	char result[1000];
	int i = 0;

	fgets(tab, sizeof(tab), stdin);
	i = strlen(tab);
	//	i - 1;

	for (int j = 0; j < i; j++) {
		if (tab[j] >= 'a' && tab[j] <= 'z') {
			result[j] = tab[j] + 'A' - 'a';
		}
		else
		{
			result[j] = tab[j];
			//printf_s("erreur");
		}
	}

	result[i] = '\0';

	printf("%s\n", result);
	return 0;
}