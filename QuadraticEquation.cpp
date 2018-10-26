#include <stdio.h>                                     //包含预处理命令 
#include <math.h>                                      //包含数学函数接口文件（用于计算平方根） 
int main()                                             //定义主函数
{                                                      //主函数开始 
	float a,b,c,d,x1,x2,x,z1,z2;                       //定义各个变量
	printf("请输入一元二次方程ax^2+bx+c=0的系数:\n");
	printf("a=");
	scanf("%f",&a);                                    //输入变量a 
	printf("b=");
	scanf("%f",&b);                                    //输入变量b
	printf("c=");
	scanf("%f",&c);                                    //输入变量c
	d=b*b-4*a*c;                                       //计算delta
	if(a==0)                                           //不能构成一元二次方程
	{
		if(b==0)                                       //一次项、二次项均为0 
		{
			if(c==0)                                   //常数项为0 
			{
				printf("该方程有无穷多解");
			}
			else                                       //常数项不为0 
			{
				printf("该方程无解");
			} 
		}
		else                                           //一次项为0 
		{
			x=(-c)/b;
			printf("不能构成一元二次方程\n");
			printf("一次方程的解为：\nx=%f",x);
		}
	}
	else                                               //能构成一元二次方程 
	{
		if(d>0)                                        //两实根情况
		{
			x1=((-b)-sqrt(d))/(2*a);
			x2=((-b)+sqrt(d))/(2*a);
			printf("该方程有两实数解，分别为:\nx1=%f\nx2=%f",x1,x2);
		}
		else if(d==0)                                  //一实根情况
		{
			x=(-b)/(2*a);
			printf("该方程有唯一实数解:\nx=%f",x);
		}
		else                                           //无实根情况
		{
			z1=(-b)/(2*a);
			z2=sqrt(-d)/(2*a);
			printf("该方程无实根，复数解分别为:\nx1=%f-%fi\nx2=%f+%fi",z1,z2,z1,z2); 
		}
	}
	return 0;                                          //函数返回值为0 
}                                                      //主函数结束 
