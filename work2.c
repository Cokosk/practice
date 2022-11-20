#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdlib.h>



int main()

{

    int answear, i, a, b;

    srand(time(NULL));

    a = rand() % 10 + 1;

    b = rand() % 10 + 1;

    printf("%d * %d = ?", a, b, a * b);



    i = 1;

    do

    {

        scanf("%d", &answear);

        if (a * b == answear)

        {

            printf("Right!");



        }

        else

        {

            printf("Wrong!Please try again.");



        }

        i++;

    } while (a * b != answear && i <= 3);

    printf("Wrong!You have tried three times! Test over");

    return 0;

}
