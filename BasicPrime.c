//������ֻ��1�ͱ��������ӵ���
//2018/11/14����
#include <stdio.h>
int main()
{
	int a,b,x,t,k;
	printf("���������������½磺");
	scanf("%d",&a);
	printf("���������������Ͻ磺");
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
	printf("������%d��%d����������%d��",a,b,k);
	return 0;
}
