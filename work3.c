#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h>



int main()

{

    int answear, j, a, b, counter = 0, percent, scoal;

    char op;

    srand(time(NULL));



    for (j = 1; j <= 10; j++)

    {

        a = rand() % 10 + 1;

        b = rand() % 10 + 1;

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



    }

    printf("%d", counter);

    scoal = percent = (10 * counter);

    printf("%d,%d%%", scoal, percent);

    return 0;

}
