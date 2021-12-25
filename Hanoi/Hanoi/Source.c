#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void move(char pos1, char pos2)
{
	printf(" %c->%c ", pos1, pos2);
	//move()����ֻʵ��һ�����ܣ���ӡ�ƶ���
}

void hanoi(int n, char source, char tmp, char des)
{
	//n�������Ӹ���
	//source��ʼλ��
	//tmp��תλ��
	//desĿ��λ��
	if (n == 1)
	{
		move(source, des);
		//���ֻ��һ�����ӣ�ֱ�Ӵ�AŲ��B
	}
	else
	{
		hanoi(n - 1, source, tmp, des);       //�ݹ齫n-1�����ӽ���tmp����source�ƶ���des
		move(source, des);                    //Ƕ�׵���move����
		hanoi(n - 1, tmp, source, des);       //�ݹ齫n-1�����ӽ���source����tmp�ƶ���des
	}
}
int main()
{
	int n = 0;
	printf("���������Ӹ���: ");
	scanf("%d", &n);
	hanoi(n,'A', 'B', 'C');
	//���Σ�����������������
	return 0;
}