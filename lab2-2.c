#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
// ���� i�� �����ϰ� i�ǰ� 1234�� ����, ���� ������ ptr, ���� ������ dptr�� �����Ͽ����ϴ�.
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);

dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
printf("value of dptr == %p\n", dptr);
printf("address of ptr == %p\n", &dptr);
printf("value of *dptr == %p\n", *dptr);
printf("value of **dptr == %d\n", **dptr);
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
// ���������� ptr ���� ����Ű�� ���� 7777�� �ٲ� ���������� dptr�� ���ؼ� i�� 7777�� ����ŵ�ϴ�.
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
// ���������� dptr�� ����Ű�� ���� 7777���� 8888�� �ٲ�� ���������� dptr�� ���ؼ� i��  8888�� ����ŵ�ϴ�.
printf("���¾�\n");
printf("2017038096");
return 0;
}