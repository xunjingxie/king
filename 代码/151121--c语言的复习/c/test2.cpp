#include <stdio.h>
int main(int argc, char *argv[])
{
 	printf("hellow \n");
  	printf("hello \t world");
  	puts("enjoy learning c\n");
  	
  	puts("===");
  	int result = 6;
  	printf("the result is %d\n",result);
  	puts("===");
	int a = 3;
	int b = 4;
	int c = a+b;
	printf("%d + %d = %d",a,b,c);
	puts("\n");
	
	int year , month, day;
	year=2015;
	month = 2;
	day=6;
	printf("%d-%02d-%02d",year,month,day);
	
	puts("\n");
	const double PI = 3.123456789;
	printf("pi is %.2f",PI);
	puts("\n"); 

	int aa = 23;
	printf("%d %o %x",aa,aa,aa);	
	
	puts("\n");
	
	return 0;
}
