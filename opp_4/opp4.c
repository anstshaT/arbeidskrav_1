#include <stdio.h>
#include <stdbool.h>

void checkArbeidskrav(int arr[])
{
    if (!arr[2] || !arr[5])
    {
        printf("False\n"); /* Ikke godkjent ak 3 eller 6 */
        return;
    }

    int godkjent = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i])
        {
            godkjent += 1;
        }
    }

    if (!(godkjent >= 4))
    {
        printf("False\n");
        return;
    }

    printf("True\n");
}

int main()
{
    int student_1[6] = {
        true,
        false,
        true,
        false,
        false, true};
    int student_2[6] = {
        false,
        true,
        true,
        false,
        true, true};
    int student_3[6] = {
        true,
        true,
        false,
        true,
        true, true};
    int student_4[6] = {
        true,
        true,
        false,
        true,
        true, false};
    int student_5[6] = {
        true,
        true,
        true,
        true,
        false, false};
    int student_6[6] = {
        true,
        true,
        true,
        true,
        true, true};

    checkArbeidskrav(student_1); /* False (3 godkjent (#3 og #6 er godkjent))*/
    checkArbeidskrav(student_2); /* True (4 godkjent (#3 og #6 er godkjent))*/
    checkArbeidskrav(student_3); /* False (5 godkjent (#3 er ikke godkjent))*/
    checkArbeidskrav(student_4); /* False (4 godkjent (#3 og #6 er ikke godkjent))*/
    checkArbeidskrav(student_5); /* False (4 godkjent (#6 er ikke godkjent))*/
    checkArbeidskrav(student_6); /* True (6 godkjent)*/

    return 0;
}
