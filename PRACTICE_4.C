#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define RANGE    1000000000
char P[RANGE / 16 + 1];
int main()
{
    int i, j, t, c = 1;
    for (i = 3; i <= RANGE; i += 2)        
        if (!(P[i >> 4] & (1 << (i >> 1 & 7))))
        for (c++, t = i + i, j = t + i; j > 0 && j <= RANGE; j += t)                
            P[j >> 4] |= 1 << (j >> 1 & 7);
    printf("%d\n", c);
    return 0;
}
