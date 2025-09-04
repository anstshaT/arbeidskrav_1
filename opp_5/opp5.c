#include <stdio.h>
#include <math.h>

void calculateDistance(int x_1, int y_1, int x_2, int y_2)
{
    float D = sqrt((pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2)));

    printf("%.4f", D);
}

int main()
{
    calculateDistance(25, 15, 35, 10);
    return 0;
}
