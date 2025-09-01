#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 34;

    for (int i = 1; i < 8; i++)
    {
        int tallene = rand() % (N + 1);
        printf("%d\n", tallene);

        if (tallene == 13)
        {
            printf("Tall 13 var trekket ut");
            break;
        }
    }
    return 0;
}
