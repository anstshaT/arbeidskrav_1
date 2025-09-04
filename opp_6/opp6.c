#include <stdio.h>
#define N 10

int main()
{
    int beløp[N];

    for (int i = 0; i < N; i++)
    {
        printf("Skiv inn din beløp ");
        scanf("%d", &beløp[i]);
        if (beløp[i] == -1)
        {
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", beløp[i]);
    }

    /* printf("Beløp %d\n", beløp[3]); */

    /* printf("Bruker skrevet inn -1"); */

    return 0;
}
