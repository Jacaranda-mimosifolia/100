#include<stdio.h> 
//32λϵͳָ��4���ֽ� 64λϵͳ8���ֽ� 
int a;int b;

int * const p1=&a;//ָ�볣��,��ʼ��ָ��=&a 
//�ص㣺ָ��ָ����ڴ��ַ�������޸ģ�ָ��ָ����ڴ��ֵ�����޸ġ� 
void dome1(void)
{
	printf("pointer constant\nָ�볣����int * const p1=&a\n");
	a=1;//chage constant;
	printf("when a=1: *p1=a,*p1=%d and *p1=1,*p1=%d\n",*p1=a,*p1=1);
	b=2;
	printf("when b=2: *p1=b,*p1=%d and *p1=2,*p1=%d\n",*p1=b,*p1=2);
	printf("\nIn the pointer constant,pointer is immutable and constant is mutable.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p1);
	printf("\nע��*p1=b is Ture and p1=&b is False\n\n\n");
}

const int * p2=&a;//����ָ��,��ʼ��ָ��=&a
//�ص㣺 ָ��ָ����ڴ��ַ�����޸ģ�����ָ��ָ���ֵ�������޸ġ�
void dome2(void)
{
	printf("pointer to constant\n����ָ�룺const int * p2=&a \n");
	p2=&a;//chage pointer;
	printf("when p2=&a: p2=&a,*p1=%d\n",p2);
	p2=&b;
	printf("when p2=&b: p2=&b,*p1=%d\n",p2);
	printf("\nIn the pointer to constant,pointer is mutable and constant is immutable.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p2);
	printf("\nע��*p1=b is False and p1=&b is Ture\n\n\n");
}

const int * const p3=&a;//ָ�����ĳ�ָ��,��ʼ��ָ��=&a
//�ص㣺 ָ��ָ����ڴ��ַ�������޸ģ�ָ��ָ���ֵҲ�������޸ġ�
void dome3(void)
{
	printf("constant pointer to a constant\nָ�����ĳ�ָ�룺const int * const p3=&a// constant pointer to a constant");
	printf("\nIn the pointer to constant,pointer is immutable and constant is immutable,too.");
	printf("\nsizeof(*p1)=%d; &a=%d; &b=%d; p1=%d",sizeof(*p1),&a,&b,p2);
	printf("\nע��*p1=b is False and p1=&b is False,too.\n\n\n");
}

int main()
{
	dome1();
	dome2();
	dome3();
	return 0;
}
