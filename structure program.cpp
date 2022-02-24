#include<stdio.h>
struct employee
{
	int empno;
	char departmentname;
	int salary;
};
int main()
{
	int i;
   struct employee a[20];
   for(i=0;i<20;i++)
   {
   	scanf("%d",&a[20].empno);
   	scanf("%s",a[20].departmentname);
	scanf("%d",&a[20].salary);   	
	   }
	    for(i=0;i<20;i++)
   {
   	printf("%d",a[20].empno);
   	printf("%s",a[20].departmentname);
	printf("%d",a[20].salary);   	
	   }	
	
}