#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int m, prime;

int IsPrime(int m);



int main()

{
    int flag;

    printf("please enter a number:", m);

    scanf("%d", &m);

    flag = IsPrime(m);

    if (flag == 1)

        printf("%d is a prime number");

    else

        printf("%d is not a prime number", m);

    return 0;

}

int IsPrime(int m)

{
    if (m == 1)

    {
        prime = 0;

    }

    else

    {
        int i;

        for (i = 2; i <= (m - 1); i++)

        {
            if (m % i == 0)

            {
                prime = 0;

                break;

            }

            else

                prime = 1;

        }

    }

    return prime;

}
