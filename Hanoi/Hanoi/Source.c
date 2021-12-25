#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void move(char pos1, char pos2)
{
	printf(" %c->%c ", pos1, pos2);
	//move()函数只实现一个功能，打印移动的
}

void hanoi(int n, char source, char tmp, char des)
{
	//n代表盘子个数
	//source起始位置
	//tmp中转位置
	//des目的位置
	if (n == 1)
	{
		move(source, des);
		//如果只有一个盘子，直接从A挪到B
	}
	else
	{
		hanoi(n - 1, source, tmp, des);       //递归将n-1个盘子借助tmp，从source移动到des
		move(source, des);                    //嵌套调用move函数
		hanoi(n - 1, tmp, source, des);       //递归将n-1个盘子借助source，从tmp移动到des
	}
}
int main()
{
	int n = 0;
	printf("请输入盘子个数: ");
	scanf("%d", &n);
	hanoi(n,'A', 'B', 'C');
	//传参：盘子数，三个柱子
	return 0;
}