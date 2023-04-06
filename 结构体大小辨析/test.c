//2.1.1)代码
/*#include"stdio.h"
#include"stdlib.h"
struct student {
    char name[20];
    int age;
    float score;
};
int main()
{
	struct student stu;
	printf("%p\n%p\n",&(stu),&(stu.name));
	system("pause");
	return 0;
}*/
//自测代码
/*#include"stdio.h"
#include"stdlib.h"
struct student{
	char name[2];
	int age;
	long long height;
	char a;
	char b;
};
int main()
{
	struct student stu;
	printf("%p char name[2]\n%p int age\n%p long long height\n%p char a\n%p char b\n",
	(stu.name),&(stu.age),&(stu.height),&(stu.a),&(stu.b));
	printf("%d\n",sizeof(stu));
	system("pause");
	return 0;
}*/
//自测代码2
/*#include"stdio.h"
int main()
{
	printf("%d\n",sizeof(long long));
	return 0;
}*/
//2.1.2代码
/*#include"stdio.h"
struct S
{
    char a;
    int b;
    char c;
    long long d;
}s;//创建结构体变量s
int main()
{
    printf("结构体大小:%d\n",sizeof(struct S));
    printf("各个成员的地址:\n");
    printf("%p char a\n",&(s.a));
    printf("%p int b\n",&(s.b));
    printf("%p char c\n",&(s.c));
    printf("%p long long d",&(s.d));
    return 0;
}*/
//2.1.3代码
/*#include"stdio.h"
struct S{
	int a;
	char c;
}s;
int main()
{
	printf("%d struct S\n",sizeof(struct S));
	printf("%p int a\n",&(s.a));
	printf("%p char c\n",&(s.c));
	return 0;
}*/
//2.1.4代码
/*#include"stdio.h"
#include"stddef.h"
struct stu{
	int name;
	double grades;
};
struct team{
	char name[6];
	struct stu Students;
	int num_stu;
};
int main()
{
	struct team Team;
	printf("%d struct stu\n",sizeof(struct stu));
	printf("%d struct team\n",sizeof(struct team));
	printf("%p char name[10]\n"
	"%p struct stu Students\n"
	"%p int num_stu\n",(Team.name),&(Team.Students),&(Team.num_stu));
	printf("%d struct stu Students\n%d int num_stu\n",offsetof(struct team,Students),offsetof(struct team,num_stu));
	return 0;
}
*/
#pragma pack(4)
#include"stdio.h"
#include"stdlib.h"
struct stu{
	int age;
	double grades;
};
int main()
{
	printf("%d\n",sizeof(struct stu));
	return 0;
}







