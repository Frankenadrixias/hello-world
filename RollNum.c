//�������������뷴����ȵ���
//2018/11/14 ����
int main() 
{
	int a,t,s=0;
	printf("������һ������");
	scanf("%d",&a);
	t=a;
	while(t)
	{
		s=s*10+t%10;
		t=t/10;
	}
	if(s==a)
	{
		printf("%d�ǻ�����",a);
	}
	else
	{
		printf("%d���ǻ�����",a);
	}
}
