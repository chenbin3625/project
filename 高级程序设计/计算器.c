#include "stdio.h"
#include "math.h"
#include <windows.h>
//================================================================================
//Author:chenbin    Student ID:1932331109
int one,i,operator,operator1,flag=0;
float a=0.0,b=0.0,out=0.0;
double n=0.0,x=0.0;   //避免阶乘溢出 采用双精度



void simple()
{
         printf("You have entered the simple mode calculator\n\n");
         printf("Please enter an operator\n\n");
         printf("<1>add   <2>subtract   <3>multiply  <4>divide  <5>Superior menu <6>exit\n\n");
         scanf("%d",&operator1);
         switch(operator1)   //嵌套switch实现加减乘除和退出功能
         {
         case 1:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number\n\n");
                scanf("%f",&b);
                out=a+b;
                printf("The calculation result is %f \n\n",out);
                break;
         case 2:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number\n\n");
                scanf("%f",&b);
                out=a-b;
                printf("The calculation result is %f \n\n",out);
                break;
         case 3:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number\n\n");
                scanf("%f",&b);
                out=a*b;
                printf("The calculation result is %f \n\n",out);
                break;
         case 4:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number\n\n");
                scanf("%f",&b);
                out=a/b;
                printf("The calculation result is %f \n\n",out);
                break;
         case 6:
                return 0;
                break;
         }
         if(operator1==5)  //判断是否返回上级菜单
         {
                system("cls");
                main();    //立即清空屏幕并返回上级菜单
         }
         else
         {
                system("pause");  //计算结果暂留
                system("cls");   //计算完毕清空屏幕
                main();
         }
}



void scientific()
{
         printf("You have entered the Scientific mode calculator\n\n");
         printf("Please enter an operator\n\n");
         printf("<1> sin（x） <2> cos（x） <3> tan（x） <4> x^y   <5> ln(x)           <6> logn(x)\n");
         printf("<7> x!       <8> 1/x      <9> x^2      <10> x^3  <11> Superior menu  <12> exit \n\n");
         scanf("%d",&operator);
         switch(operator)
         {
         case 1:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=sin(x);
                printf("The calculation result is %lf \n\n",out);
                break;
         case 2:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=cos(x);
                printf("The calculation result is %lf \n\n",out);
                break;
         case 3:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=tan(x);
                printf("The calculation result is %lf \n\n",out);
                break;
         case 4:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number \n\n");
                scanf("%lf",&n);
                out=pow(x,n);
                printf("The calculation result is %lf \n\n",out);
                break;
         case 5:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=log(x);
                printf("The calculation result is %lf \n\n",out);
                break;
         case 6:
                printf("Please enter the first number\n\n");
                scanf("%f",&a);
                printf("Please enter the second number \n\n");
                scanf("%lf",&n);
                out=log(n)/log(x);     //使用换底公式实现对数计算
                printf("The calculation result is %lf \n\n",out);
                break;
         case 7:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                for(i=1,out=1;i<=x;i++)  //使用for循环实现阶乘
                        out=out*i;
                printf("The calculation result is %lf \n\n",out);
                break;
         case 8:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                if(x!=0)   //判断x是否合法，不合法则让用户重新输入
                {
                out=1/x;
                printf("The calculation result is %lf \n\n",out);
                }
                else
                {
                        printf("x is not allowed to be 0，please enter again /n/n");
                        scanf("%lf",&x);
                }
                break;
         case 9:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=x*x;
                printf("The calculation result is %lf \n\n",out);
                break;
         case 10:
                printf("Please enter the number\n\n");
                scanf("%f",&a);
                out=x*x*x;
                printf("The calculation result is %lf \n\n",out);
                break;
         case 12:
                return 0;
                break;
         }
         if(operator==11)  //判断是否返回上级菜单
         {
                system("cls");
                main();    //立即清空屏幕并返回上级菜单
         }
         else
         {
                system("pause");  //计算结果暂留
                system("cls");   //计算完毕清空屏幕
                main();
         }
}


void main()
{
        printf("Welcome to Chenbin's Personal calculator\n\n");
        while(operator!=12 && operator1!=6){     //使用while语句实现多次计算
        printf("Please enter the menu you want to enter\n\n");
        printf("<1> Simple    <2> Scientific     <3> Exit\n\n");
        scanf("%d",&one);
        switch(one)   //使用switch实现多种功能选项
        {
        case 1:
                simple();
                break;
        case 2:
                scientific();
                break;
        case 3 :
                return 0;
                break;
        }
}
}
