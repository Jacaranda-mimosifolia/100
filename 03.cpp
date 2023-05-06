#include<stdio.h> 
//32位系统指针4个字节 64位系统8个字节 
int a;int b;

int * const p1=&a;//指针常量,初始化指针=&a 
//特点：指针指向的内存地址不可以修改，指针指向的内存的值可以修改。 
void dome1(void)
{
	printf("pointer constant\n指针常量：int * const p1=&a\n");
	a=1;//chage constant;
	printf("when a=1: *p1=a,*p1=%d and *p1=1,*p1=%d\n",*p1=a,*p1=1);
	b=2;
	printf("when b=2: *p1=b,*p1=%d and *p1=2,*p1=%d\n",*p1=b,*p1=2);
	printf("\nIn the pointer constant,pointer is immutable and constant is mutable.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p1);
	printf("\n注：*p1=b is Ture and p1=&b is False\n\n\n");
}

const int * p2=&a;//常量指针,初始化指针=&a
//特点： 指针指向的内存地址可以修改，但是指针指向的值不可以修改。
void dome2(void)
{
	printf("pointer to constant\n常量指针：const int * p2=&a \n");
	p2=&a;//chage pointer;
	printf("when p2=&a: p2=&a,*p1=%d\n",p2);
	p2=&b;
	printf("when p2=&b: p2=&b,*p1=%d\n",p2);
	printf("\nIn the pointer to constant,pointer is mutable and constant is immutable.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p2);
	printf("\n注：*p1=b is False and p1=&b is Ture\n\n\n");
}

const int * const p3=&a;//指向常量的常指针,初始化指针=&a
//特点： 指针指向的内存地址不可以修改，指针指向的值也不可以修改。
void dome3(void)
{
	printf("constant pointer to a constant\n指向常量的常指针：const int * const p3=&a// constant pointer to a constant");
	printf("\nIn the pointer to constant,pointer is immutable and constant is immutable,too.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p2);
	printf("\n注：*p1=b is False and p1=&b is False,too.\n\n\n");
}

int main()
{
	dome1();
	dome2();
	dome3();
	return 0;
}
