//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
int main()
{
    int a,n[20],i,t,k=0;
    printf("请输入一个整数：");
	scanf("%d",&a);
	t=a;
	i=1;
	while(t>0)
	{
		n[i]=t%10;
		t=t/10;
		k=k+1;
		i=i+1;
	}
	printf("%d的每位数字是：\n",a);
	for(i=k;i>0;i--)
	{
		printf("%d ",n[i]);
	}
	return 0;
}
