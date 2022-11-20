#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h>



int main()

{

    int answear, i, a, b, counter = 0, percent, scoal, type;

    srand(time(NULL));

    for (i = 1; i <= 10; i++)

    {

        a = rand() % 10 + 1;

        b = rand() % 10 + 1;

        type = rand() % 4 + 1;

        switch (type)

        {

        case 1:

            printf("%d * %d = ?", a, b, a * b);

            scanf("%d", &answear);

            if (a * b == answear)

            {

                counter = ++counter;

                printf("Right!");



            }

            else

            {

                printf("Wrong!");



            }

            break;

        case 2:

            printf("%d + %d = ?", a, b, a + b);

            scanf("%d", &answear);

            if (a + b == answear)

            {

                counter = ++counter;

                printf("Right!");



            }

            else

            {

                printf("Wrong!");



            }

            break;

        case 3:

            printf("%d - %d = ?", a, b, a - b);

            scanf("%d", &answear);

            if (a - b == answear)

            {

                counter = ++counter;

                printf("Right!");



            }

            else

            {

                printf("Wrong!");



            }

            break;

        case 4:

            printf("%d / %d = ?", a, b, a / b);

            scanf("%d", &answear);

            if (a / b == answear)

            {

                counter = ++counter;

                printf("Right!");



            }

            else

            {

                printf("Wrong!");



            }

            break;

        default:

            printf("");

        }

    }

    printf("%d", counter);

    scoal = percent = (10 * counter);

    printf("%d,%d%%", scoal, percent);

    return 0;

}
