#include <stdio.h>                                     //包含预处理命令 
int main()                                             //定义主函数 
{                                                      //主函数开始 
	double a,b,c,d,e,f,x,y,k;                           //定义各个所需变量 
	printf("请输入ax+by=c,dx+ey=f的系数：\n");
	printf("a=");
	scanf("%lf",&a);                                    //输入变量a 
	printf("b=");
	scanf("%lf",&b);                                    //输入变量b
	printf("c=");
	scanf("%lf",&c);                                    //输入变量c
	printf("d=");
	scanf("%lf",&d);                                    //输入变量d 
	printf("e=");
	scanf("%lf",&e);                                    //输入变量e
	printf("f=");
	scanf("%lf",&f);                                    //输入变量f
	if(a==0)                                            //开始分类讨论 
	{
		if(b==0)
		{
			if(c==0)                                    //此时ax+by=c无意义，看第二个方程 
			{
				if(d==0&&e==0)
				{
					if(f==0)                            //此时6个参数值均为0，无穷多解 
					{
						printf("该线性方程组有无穷多解，\nx、y均可为任意值");
					}
					else                                //出现0=f情况，此时无解 
					{
						printf("该线性方程组无解");
					}
				}
				else                                    //此时第二个方程有意义 
				{
					if(d==0)
					{
						y=f/e;
						printf("该线性方程组有无穷多解，\n满足y=%lf，x为任意值",y);
					}
					else
					{
						if(e==0)
						{
							x=f/d;
							printf("该线性方程组有无穷多解，\n满足x=%lf，y为任意值",x);
						}
						else                            //此时第二个方程有无穷多解 
						{
							printf("该线性方程组有无穷多解，\n满足%lfx+%lfy=%lf",d,e,f);
						}
					}
				}
			}
			else                                        //出现0=c情况，无解 
			{
				printf("该线性方程组无解");
			}
		}
		else                                            //a等于0，b不等于0 
		{
			if(d==0)
			{
				if(e==0)
				{
					if(f==0)                            //此时第二个方程无意义 
					{
						y=c/b;
						printf("该线性方程组有无穷多解，\n满足y=%lf，x为任意值",y);
					}
					else
					{
						printf("该线性方程组无解");
					}
				}
				else
				{
					if(b*f==c*e)
					{
						y=c/b;
						printf("该线性方程组有无穷多解，\n满足y=%lf，x为任意值",y);
					}
					else
					{
						printf("该线性方程组无解");
					}
				}
			}
			else                                        //此时方程1为一元一次方程 
			{
				if(e==0)
				{
					x=f/d;
					y=c/b;
					printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
				}
				else
				{
					y=c/b;
					x=(f-e*y)/d;
					printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
				}
			}
		}
	}
	else                                                //讨论a不为0时的情况 
	{
		if(b==0)
		{
			if(d==0&&e==0)
			{
				if(f==0)                                //同上，此时方程2无意义 
				{
					x=c/a;
					printf("该线性方程组有无穷多解，\nx=%lf，y为任意值",x);
				}
				else
				{
					printf("该线性方程组无解");
				}
			}
			else                                        //此时方程1为一元一次方程 
			{
				if(d==0)
				{
					x=c/a;
					y=f/e;
					printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
				}
				else
				{
					if(e==0)
					{
						if(a*f==c*d)
						{
							x=c/a;
							printf("该线性方程组有无穷多解，\n满足x=%lf，y为任意值",x);
						}
						else
						{
							printf("该线性方程组无解");
						}	
					}
					else
					{
						x=c/a;
						y=(f-d*x)/e;
						printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
					}
				}
			}
		}
		else                                            //此时第一个方程有无穷多解 
		{
			if(d==0&&e==0)
			{
				if(f==0)
				{
					printf("该线性方程组有无穷多解，\n满足%lfx+%lfy=%lf",a,b,c);
				}
				else
				{
					printf("该线性方程组无解");
				}
			}
			else                                        //此时两个方程均有意义 
			{
				if(d==0)
				{
					y=f/e;
					x=(c-b*y)/a;
					printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
				}
				else
				{
					if(e==0)
					{
						x=f/d;
						y=(c-a*x)/b;
						printf("该线性方程组有唯一解：\nx=%lf，y=%lf",x,y);
					}
					else
					{
						k=b*d-a*e;
						if(k==0)
						{
							if(a*f==c*d)
							{
								printf("该线性方程组有无穷多解，\n满足%lfx+%lfy=%lf",a,b,c);
							}
							else
							{
								printf("该线性方程组无解");
							}
						}
						else                            //此时满足一般公式 
						{
							x=(b*f-c*e)/k;
							y=(c*d-a*f)/k;
							printf("该线性方程组有唯一解：\nx=%lf\ny=%lf",x,y);	
						}
					}
				}
			}
		}
	}
	return 0;                                           //函数返回值为0 
}                                                       //主函数结束 
