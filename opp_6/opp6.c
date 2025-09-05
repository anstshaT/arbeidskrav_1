#include <stdio.h>
#define N 20 /* maks 20 beløper */

int main()
{
    int beløp = 0;

    for (int i = 0; i < N; i++)
    {
        printf("Skiv inn din beløp ");
        scanf("%d", &beløp);

        if (beløp == -1) /* stoppsjekk */
        {
            break;
        }

        if (beløp < 10000)
        {
            printf("Avgift 0%%\n");
        }
        else if ((beløp >= 10000) && (beløp < 25000))
        {
            printf("Avgift 5%%\n");
        }
        else if ((beløp >= 25000) && (beløp < 50000))
        {
            printf("Avgift 10%%\n");
        }
        else
        {
            printf("Avgift 23%%\n");
        }
    }

    return 0;
}
