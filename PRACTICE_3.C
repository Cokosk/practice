#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
    int n, i, j, t, l;
    int sum = 0;
    printf("请输入一个大于2的整数：");
    scanf("%d", &n);
    l = n;
    for (; n >= 2; n--)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i != 0)//判断其为素数
                t = 1;
            else
            {
                t = 2;
                break;
            }
        }
        if (t == 1)
        {
            sum += n;
            //printf("%d ",n);//输出1-n之间的所有素数
        }
    }
    printf("1-%d之间的所有素数和为：%d\n", l, sum);
    return 0;
}
