/*����������������Ȼ����Ϊ��������:
��������,��������֮��,��������֮���Լ��������ֵ�ƽ���Ͷ�������.
����113����һ����������.
��[100,9999]֮��:
(1)���������ĸ���.
(2)���г�������֮��.
(3)���ĳ�������.*/
//2018/11/14 ����
#include <stdio.h> 
int sum_bit(int num)
{
	int n[100],i=0,k=0,s=0;
	while(num>0)
	{
		n[i]=num%10;
		num=num/10;
		k=k+1;
		i=i+1;
	}
	for(i=k-1;i>=0;i--)
	{
		s=s+n[i];
	}
	return s;
}
int multi_bit(int num)
{
	int n[100],i=0,k=0,s=1;
	while(num>0)
	{
		n[i]=num%10;
		num=num/10;
		k=k+1;
		i=i+1;
	}
	for(i=k-1;i>=0;i--)
	{
		s=s*n[i];
	}
	return s;
}
int square_sum_bit(int num)
{
	int n[100],i=0,k=0,s=0;
	while(num>0)
	{
		n[i]=num%10;
		num=num/10;
		k=k+1;
		i=i+1;
	}
	for(i=k-1;i>=0;i--)
	{
		s=s+n[i]*n[i];
	}
	return s;
}
int isprime(int num)
{
	int t=1;
	do{
		t=t+1;
	} while(num%t!=0&&t<=num);
	if(t==num)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i,a,b,k=0,t=0,sum=0;
	printf("���������󳬼������½�(��)��");
	scanf("%d",&a);
	printf("���������󳬼������Ͻ�(����)��");
	scanf("%d",&b);
	for(i=a;i<b;i++)
	{ 
		if(isprime(i)>0&&isprime(sum_bit(i))>0&&isprime(multi_bit(i))>0&&isprime(square_sum_bit(i))>0)
		{
			printf("%d\n",i);
			t=t+1;
			sum=sum+i;
			k=i;
		}
	} 
	printf("������%d��%d����������%d��\n",a,b,t);
	printf("��Щ���������ĺ�Ϊ��%d\n",sum);
	printf("��֮�����ĳ�������Ϊ��%d\n",k);
	return 0;
}
