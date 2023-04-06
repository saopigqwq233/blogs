#include"stdio.h"
extern int Add(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",Add(a,b));
	return 0;
}