//素数是只有1和本身是因子的数
//2018/11/14更新
#include <stdio.h>
int main()
{
	int a,b,x,t,k;
	printf("请输入所求素数下界：");
	scanf("%d",&a);
	printf("请输入所求素数上界：");
	scanf("%d",&b);
	k=0;
	for(x=a;x<=b;x++)
	{
		t=1;
		do{
			t=t+1;
		} while (x%t!=0&&t<=x);
		if(t==x)
		{
			printf("%d\n",x);
			k=k+1;
		}
	}
	printf("在区间%d到%d的素数共有%d个",a,b,k);
	return 0;
}
