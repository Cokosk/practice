#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h> 

int one();
int two();
int three();
int four();
int five();
int six();
int rightCount = 0;

/*函数功能：判断两个数是否相等*/
int Pending(int s, int flag)
{
    if (s == flag)
    {
        printf("Right\n");
        rightCount++;
    }
    else
        printf("Wrong\n");
    return 0;
}
/*判断被除数是否为零*/
int Division(char b, double c)
{
    int temp;
    temp = 0;
    if (b == '/' && c == 0)
    {
        printf("被除数为零");
        temp = 1;
    }
    return temp;
}

/*产生随机数*/

int Srand1()//产生1~9
/*
函数功能：产生随机数
函数入口：无
函数返回值：随机数
*/
{
    srand((unsigned int)time(NULL));
    Sleep(10);
    int i;
    i = rand() % 9 + 1;
    return i;
}

/*函数功能：产生随机数
函数传参：无
函数返回值：随机数*/
int Srand2()//产生1~9
{
    Sleep(10);
    int i;
    i = rand() % 9 + 1;
    return i;
}
int StatisticScore(int c)
/*
* 功能：传入算对的题数
入口参数：c
返回值：答题的分数
*/
{
    int x;
    x = c * 10;
    return x;
}
double StatisticRate(double c)
/*
功能：算正确率
入口参数：c
返回值：答题的正确率*/
{
    double y;
    y = c / 10;
    return y;
}
int one()
/*任务一
* 无传参
* 无返回值*/
{
    int a, c, d, m;
    do
    {
        a = Srand1();
        c = Srand2();
        d = a * c;
        printf("%d*%d=", a, c);
        scanf_s("%d", &m);
        Pending(d, m);
    } while (m != d);
    return 0;
}

/*任务二
无传参
无返回值*/

int two()
{
    srand((unsigned)time(NULL));
    int flag, count, temp;
    flag = 0;
    count = 0;
    double a, c, s, e;
    int b;
    char p;
    p = '/';

    do
    {
        a = Srand1();
        b = rand() % 4;
        c = Srand2();
        switch (b)
        {
        case 0:
            temp = Division(p, c);
            if (temp == 1)
                break;
            printf("%.2f/%.2f=", a, c);
            s = a / c;
            break;
        case 1:
            printf("%.2f*%.2f=", a, c);
            s = a * c;
            break;
        case 2:
            s = a + c;
            printf("%.2f+%.2f=", a, c);
            break;
        default:
            printf("%.2f-%.2f=", a, c);
            s = a - c;
        }
        scanf_s("%lf", &e);
        if (s == e) {
            flag++;
            printf("Right\n");
        }
        else {
            count++;
            if (count != 4)
                printf("Wrong ! Please try again.\n");
            else {
                printf("Wrong! You have tried three times! Test over!\n");
                break;
            }
        }
    } while (flag != 1);
    flag = count = 0;
    return 0;
}

int three()
/*任务三
无传参
无返回值*/
{
    int a, c, d, m, flag;
    flag = 0;
    rightCount = 0;
    do {
        flag++;
        a = Srand1();
        c = Srand2();
        d = a * c;
        printf("%d*%d=", a, c);
        scanf_s("%d", &m);
        Pending(d, m);
    } while (flag != 10);
    int score = StatisticScore(rightCount);
    double rate = StatisticRate(rightCount);
    printf("得分: %d , 正确率:%.2f\n", score, rate);
    return 0;
}
int four()
/*
任务四*/
{
    int b, flag, parameter, s, x, temp;
    double y;
    double a, c;
    flag = 0;
    int score;
    rightCount = 0;
    double m, rate;
    char p;
    do {
        flag++;
        a = Srand1();
        a = a * 1.0;
        c = Srand2();
        c = c * 1.0;
        b = rand() % 4;
        switch (b) {
        case 0:
            p = '/';
            temp = Division(p, c);
            if (temp == 1)
                break;
            printf("%.2f/%.2f=", a, c);
            s = a / c;
            break;
        case 1:
            printf("%.2f*%.2f=", a, c);
            s = a * c;
            break;
        case 2:
            s = a + c;
            printf("%.2f+%.2f=", a, c);
            break;
        default:
            printf("%.2f-%.2f=", a, c);
            s = a - c;
        }
        scanf_s("%lf", &m);
        Pending(s, m);
    } while (flag != 10);
    score = StatisticScore(rightCount);
    rate = StatisticRate(rightCount);
    printf("得分为: %d ,正确率为: %.2f ", score, rate);
    printf("\n");
    return 0;
}
int five()
/*任务五
无传参
无返回值*/
{
    int b, flag, x, temp;
    double a, c;
    rightCount = 0;
    double rate = 0;
    double y, s;
    do {
        flag = 0;
        double m;
        char p;
        do {
            a = Srand1();
            a = (double)a;
            c = Srand2();
            c = (double)c;
            b = rand() % 4;
            switch (b) {
            case 0:
                p = '/';
                temp = Division(p, c);
                if (temp == 1)
                {
                    continue;
                }
                printf("%.2f/%.2f=", a, c);
                s = a / c;
                break;
            case 1:
                printf("%.2f*%.2f=", a, c);
                s = a * c;
                break;
            case 2:
                s = a + c;
                printf("%.2f+%.2f=", a, c);
                break;
            default:
                printf("%.2f-%.2f=", a, c);
                s = a - c;
            }
            scanf_s("%lf", &m);
            flag++;
            Pending(s, m);
        } while (flag % 10 != 0);
        int score = StatisticScore(rightCount);
        //    score = 1.0 * rightCount;
        rate = StatisticRate(rightCount);
        printf("%d %.2f", score, rate);
        printf("\n");
    } while (rate <= 0.75);
    return 0;
}
int main()
{
    int a, flag;
    flag = 0;
    printf("******************************************************************************\n");
    printf(" * 1. 任务 1：随机产生 1 - 10 之间正整数，出乘法问题，直到学生答对为止。\n");
    printf(" * 2. 任务 2：在任务 1 基础上，当学生答错时，最多给三次机会。 \n");
    printf(" * 3. 任务 3：在任务 1 基础上，连做 10 道乘法题，不给机会重做，统计总分、正确率。\n");
    printf(" * 4. 任务 4：在任务 3 基础上，随机产生 10 道四则运算题，不给机会重做，统计总分、正确率。 \n");
    printf(" * 5. 任务 5：在任务 4 基础上，若回答正确率低于 75 % ，则再做 10 道题，直到正确率高于 75 % 为止。\n");
    printf(" * 6. 退出 \n");
    printf("***************************************************************************** \n");
    while (scanf_s("%d", &a) != EOF) {
        if (a == 6) {
            printf("程序已结束");
            break;
        }

        switch (a) {
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
        case 5:
            five();
            break;
        default:
            printf("命令错误，程序已结束");
            break;
        }
        if (flag == 1)
            break;
        printf("*********************************************************************************\n");
        printf(" * 1. 任务 1：随机产生 1 - 10 之间正整数，出乘法问题，直到学生答对为止。\n");
        printf(" * 2. 任务 2：在任务 1 基础上，当学生答错时，最多给三次机会。 \n");
        printf(" * 3. 任务 3：在任务 1 基础上，连做 10 道乘法题，不给机会重做，统计总分、正确率。\n");
        printf(" * 4. 任务 4：在任务 3 基础上，随机产生 10 道四则运算题，不给机会重做，统计总分、正确率。 *\n");
        printf(" * 5. 任务 5：在任务 4 基础上，若回答正确率低于 75 % ，则再做 10 道题，直到正确率高于 75 % 为止。\n");
        printf(" * 6. 退出 *\n");
        printf("********************************************************************************** \n");
    }
    return 0;
}
