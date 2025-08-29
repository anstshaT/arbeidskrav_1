#include <stdio.h>

/* int main()
{
    int x = 17;
    int y = 90;

    int sum = x + y;

    printf("Summen av %d og %d er %d\n", x, y, sum);
    return 0;
} */

int main()
{
    int lånAvBåt = 4000;
    int perDeltaker = 200;
    int antallDeltager;

    printf("Antall av deltagere:\n");
    scanf("%d", &antallDeltager);

    int totalPris = lånAvBåt + (antallDeltager * perDeltaker);

    if (totalPris >= 6000)
    {
        totalPris = (totalPris * 80) / 100; /* rabatt 20% */
        printf("Totalpris med rabatt: %d\n", totalPris);
    }
    else
    {
        printf("Totalpris: %d\n", totalPris);
    }

    return 0;
}