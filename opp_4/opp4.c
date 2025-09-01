#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* På universitetet i skomakergata må 4 av 6 obligatoriske arbeidskrav være godkjent
for at man skal kunne gå opp til eksamen. I tillegg så må arbeidskrav 3 eller 6
(eller begge) være godkjent.

Lag en funksjon som sjekker om en gitt student får lov å gå opp til eksamen.
Hvis kravene over er oppfylt returnerer funksjonen True, ellers False. Funksjonen
tar et argument som er en liste/tabell(array). Beskriv i koden hvordan du velger
å sette opp lista/tabellen(arrayet).

Tips: C: Bruk stdbool.h
 */

/* Tabell structur
Eksempel:
1 | Godkjent
2 | Ikke godkjent */
struct StudentTasks
{
    int i;      /* arbeidskrav nummer */
    char c[20]; /* arbeidskrav Godkjent / Ikke godkjent */
};

void checkStudentTask(struct StudentTasks list[])
{
    int i;
    char ikkeG[20] = "Ikke godkjent";

    for (i = 0; i < 6; i++)
    {
        if (strcmp(list[i].c, ikkeG) != 0)
        {
            /* if (strcmp(list[2].c, ikkeG) == 0 || strcmp(list[5].c, ikkeG) == 0)
            {
                printf("Ikke gokjent obligatorisk arbeidskrav: %d %s\n", list[2].i, list[2].c);
                i += 1;
                printf("Ikke godkjent obligatorisk arbeidskrav: %d\n", list[i].i);
                break;
            } */

            printf("Ikke nok godkjent arbeidskrav for å gå opp til eksamen:");
        }
        else
        {
            printf("Du går opp til eksamen");
        }
    }
}

int main()
{
    struct StudentTasks num[6] = {{1, "Ikke godkjent"}, {2, "Godkjent"}, {3, "Godkjent"}, {4, "Ikke godkjent"}, {5, "Godkjent"}, {6, "Ikke godkjent"}};

    checkStudentTask(num);
    return 0;
}
