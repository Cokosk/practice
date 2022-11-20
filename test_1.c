//试商法则判断素数




#include <stdio.h>

 

int m,prime;

int IsPrime(int m);

 

int main()

{
    int flag;

    printf("please enter a number:",m);

    scanf("%d",&m);

    flag=IsPrime(m);

    if(flag==1)

      printf("%d is a prime number");

    else

      printf("%d is not a prime number",m);

    return 0;

}

int IsPrime(int m)

{
    if(m==1)

       {
           prime=0;

       }

    else

        {
        int i;

          for(i = 2;i <= (m - 1);i++)

           {
            if(m%i==0)

           {
            prime=0;

            break;

           }

           else

           prime=1;

           }

        }

    return prime;

}
————————————————
版权声明：本文为CSDN博主「玛卡巴卡和蓝精灵」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_48450741/article/details/112464708
