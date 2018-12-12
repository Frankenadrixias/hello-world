//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
int main()
{
	int y;
	printf("请输入年份：");
    scanf("%d",&y);
	if(y%4!=0||(y%100==0&&y%400!=0))
	{
		printf("%d年不是闰年",y);
	}
	else
	{
		printf("%d年是闰年",y);
	}
	return 0;
} 
