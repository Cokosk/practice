//试商法是最简单的判断素数的方法。用i=2 ~ m-1之间的整数去试商,若存在某个m能被1与m本身以外的整数i整除(即余数为0) ,则m不是素数,若上述范围内的所有整数都不能整除m,则m是素数。采用试商法,分别用goto语句、break语句和采用设置标志变量并加强循环测试等三种方法编写素数判断函数IsPrime() ，从键盘任意输入一个整数m,判断m是否为素数，如果m是素数,则按" %d is a prime number\n"格式打印该数是素数,否则按”%d is not a prime number\n”格式打印该数不是素数。然后分析哪种方法的可读性更好。

//定义一个标志flag，flag=1时为素数。素数判断IsPrime（），外层如果输入的数为1或质数，定义prime=0返回主函数，此数不是素数。试商法，用for循环，i=2 ~ m-1之间的整数去试商，如果输入的数除以i变量的模为0，prime=0返回主函数，此数不是素数，break。








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

