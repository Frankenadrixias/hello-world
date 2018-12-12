/*满足下列条件的自然数称为超级素数:
该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.
例如113就是一个超级素数.
求[100,9999]之内:
(1)超级素数的个数.
(2)所有超级素数之和.
(3)最大的超级素数.*/
//2018/11/14 更新
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
	printf("请输入所求超级素数下界(含)：");
	scanf("%d",&a);
	printf("请输入所求超级素数上界(不含)：");
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
	printf("在区间%d到%d的素数共有%d个\n",a,b,t);
	printf("这些超级素数的和为：%d\n",sum);
	printf("这之中最大的超级素数为：%d\n",k);
	return 0;
}
