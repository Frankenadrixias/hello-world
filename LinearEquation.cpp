#include <stdio.h>                                     //����Ԥ�������� 
int main()                                             //���������� 
{                                                      //��������ʼ 
	double a,b,c,d,e,f,x,y,k;                           //�������������� 
	printf("������ax+by=c,dx+ey=f��ϵ����\n");
	printf("a=");
	scanf("%lf",&a);                                    //�������a 
	printf("b=");
	scanf("%lf",&b);                                    //�������b
	printf("c=");
	scanf("%lf",&c);                                    //�������c
	printf("d=");
	scanf("%lf",&d);                                    //�������d 
	printf("e=");
	scanf("%lf",&e);                                    //�������e
	printf("f=");
	scanf("%lf",&f);                                    //�������f
	if(a==0)                                            //��ʼ�������� 
	{
		if(b==0)
		{
			if(c==0)                                    //��ʱax+by=c�����壬���ڶ������� 
			{
				if(d==0&&e==0)
				{
					if(f==0)                            //��ʱ6������ֵ��Ϊ0�������� 
					{
						printf("�����Է������������⣬\nx��y����Ϊ����ֵ");
					}
					else                                //����0=f�������ʱ�޽� 
					{
						printf("�����Է������޽�");
					}
				}
				else                                    //��ʱ�ڶ������������� 
				{
					if(d==0)
					{
						y=f/e;
						printf("�����Է������������⣬\n����y=%lf��xΪ����ֵ",y);
					}
					else
					{
						if(e==0)
						{
							x=f/d;
							printf("�����Է������������⣬\n����x=%lf��yΪ����ֵ",x);
						}
						else                            //��ʱ�ڶ��������������� 
						{
							printf("�����Է������������⣬\n����%lfx+%lfy=%lf",d,e,f);
						}
					}
				}
			}
			else                                        //����0=c������޽� 
			{
				printf("�����Է������޽�");
			}
		}
		else                                            //a����0��b������0 
		{
			if(d==0)
			{
				if(e==0)
				{
					if(f==0)                            //��ʱ�ڶ������������� 
					{
						y=c/b;
						printf("�����Է������������⣬\n����y=%lf��xΪ����ֵ",y);
					}
					else
					{
						printf("�����Է������޽�");
					}
				}
				else
				{
					if(b*f==c*e)
					{
						y=c/b;
						printf("�����Է������������⣬\n����y=%lf��xΪ����ֵ",y);
					}
					else
					{
						printf("�����Է������޽�");
					}
				}
			}
			else                                        //��ʱ����1ΪһԪһ�η��� 
			{
				if(e==0)
				{
					x=f/d;
					y=c/b;
					printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
				}
				else
				{
					y=c/b;
					x=(f-e*y)/d;
					printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
				}
			}
		}
	}
	else                                                //����a��Ϊ0ʱ����� 
	{
		if(b==0)
		{
			if(d==0&&e==0)
			{
				if(f==0)                                //ͬ�ϣ���ʱ����2������ 
				{
					x=c/a;
					printf("�����Է������������⣬\nx=%lf��yΪ����ֵ",x);
				}
				else
				{
					printf("�����Է������޽�");
				}
			}
			else                                        //��ʱ����1ΪһԪһ�η��� 
			{
				if(d==0)
				{
					x=c/a;
					y=f/e;
					printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
				}
				else
				{
					if(e==0)
					{
						if(a*f==c*d)
						{
							x=c/a;
							printf("�����Է������������⣬\n����x=%lf��yΪ����ֵ",x);
						}
						else
						{
							printf("�����Է������޽�");
						}	
					}
					else
					{
						x=c/a;
						y=(f-d*x)/e;
						printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
					}
				}
			}
		}
		else                                            //��ʱ��һ�������������� 
		{
			if(d==0&&e==0)
			{
				if(f==0)
				{
					printf("�����Է������������⣬\n����%lfx+%lfy=%lf",a,b,c);
				}
				else
				{
					printf("�����Է������޽�");
				}
			}
			else                                        //��ʱ�������̾������� 
			{
				if(d==0)
				{
					y=f/e;
					x=(c-b*y)/a;
					printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
				}
				else
				{
					if(e==0)
					{
						x=f/d;
						y=(c-a*x)/b;
						printf("�����Է�������Ψһ�⣺\nx=%lf��y=%lf",x,y);
					}
					else
					{
						k=b*d-a*e;
						if(k==0)
						{
							if(a*f==c*d)
							{
								printf("�����Է������������⣬\n����%lfx+%lfy=%lf",a,b,c);
							}
							else
							{
								printf("�����Է������޽�");
							}
						}
						else                            //��ʱ����һ�㹫ʽ 
						{
							x=(b*f-c*e)/k;
							y=(c*d-a*f)/k;
							printf("�����Է�������Ψһ�⣺\nx=%lf\ny=%lf",x,y);	
						}
					}
				}
			}
		}
	}
	return 0;                                           //��������ֵΪ0 
}                                                       //���������� 
