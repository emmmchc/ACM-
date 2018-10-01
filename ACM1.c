/*
08:数的计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 128000kB
描述


我们要求找出具有下列性质数的个数(包含输入的自然数n):

先输入一个自然数n(n<=1000),< span="">然后对此自然数按照如下方法进行处理:

1.          不作任何处理;

2.          在它的左边加上一个自然数,但该自然数不能超过原数的一半;

3.          加上数后,继续按此规则进行处理,直到不能再加自然数为止.





输入
一个整数n
输出
满足条件的数的个数
样例输入
6
样例输出
6
提示
满足条件的数为：
16

26

126

36

136

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,i=0;
	int b[10]=0;
	scanf("%d",&n);
	k = n;
	b[0] = n;
	while(n)
	{
		n /= 2;
		if(n<k&&n!=0)
			b[i+1] = n;
	}
	int len = sizeof(b)/sizeof(b[0]);
	for(i=0; i<len && b[i]!=0; i++)
		printf("%d",b[i]);
	return 0;
}
