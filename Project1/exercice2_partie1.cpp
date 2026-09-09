/*#include <iostream>
#include <random>

int main() {

    srand(time({}));
    int n = 0;
    int max = 20;
    int min = 0;
    int tab[30];
    int moy = 0;

    printf_s("donner le nombre ?\n");

    scanf_s("%d",&n);

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 21;
    }

    for(int o = 0; o < n; o ++)
    {
        moy = (tab[o] + moy);
    }

    moy = moy / n;

    printf("la moyenne est de %d", moy);

return 0;
}
*/