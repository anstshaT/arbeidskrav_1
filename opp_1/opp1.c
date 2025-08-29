#include <stdio.h>

int main()
{
    int lånAvBåt = 4000;
    int perDeltaker = 200;
    int antallDeltager = 9;

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
