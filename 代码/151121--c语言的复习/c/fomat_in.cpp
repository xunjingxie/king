#include <stdio.h>
int main(int argc, char *argv[])
{
/*	
	//scnaf�ĸ�ʽ����� 
	int a,b;
	scanf("%d%*d%d",&a,&b);
	printf("%d:%d",a,b);
	
	puts("integer computer");
*/	
/* 
	������ȡ�������� 
	int people= 9;
	int yushu = 9%4;
	int zhengshu = 9/4;
	printf("%d%d",yushu,zhengshu);
*/ 

	int num = 123;
 	int a = num/100;
 	int b =  num/10%10;
 	int c = num%10;	  	
 	//ȡ��ǰ��/ ����% 
 	printf("%d%d%d",c,b,a);
 	
 	//%2 == 0 even number 
 	return 0;
}