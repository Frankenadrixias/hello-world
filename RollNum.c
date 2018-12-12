//回文数：正读与反读相等的数
//2018/11/14 更新
int main() 
{
	int a,t,s=0;
	printf("请输入一个数：");
	scanf("%d",&a);
	t=a;
	while(t)
	{
		s=s*10+t%10;
		t=t/10;
	}
	if(s==a)
	{
		printf("%d是回文数",a);
	}
	else
	{
		printf("%d不是回文数",a);
	}
}
