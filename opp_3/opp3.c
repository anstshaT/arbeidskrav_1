#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int N = 34;

    for (int i = 1; i < 8; i++)
    {
        int tallene = rand() % (N + 1);
        printf("%d\n", tallene);

        if (tallene == 13)
        {
            printf("Tall 13 trekket ut");
            break;
        }
    }
    return 0;
}
