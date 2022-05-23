#include <stdio.h>

int main()
{
    int toMa = 21, pickNumUs, pickNumComp;

    while (1)
    {
        printf("Pick 1, 2, 3 or 4 MatchSticks\n");
        scanf("%d", &pickNumUs);

        if (pickNumUs > 4 || pickNumUs < 1)
        {
            continue;
        }

        toMa = toMa - pickNumUs;

        pickNumComp = 5 - pickNumUs;

        printf("Computer picked %d matches\n", pickNumComp);

        toMa = toMa - pickNumComp;

        if (toMa == 1)
        {
            printf("You lose\n");
            printf("No of Matches left %d\n", toMa);
            break;
        }
    }

    return 0;
}