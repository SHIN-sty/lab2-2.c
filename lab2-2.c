#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
// 변수 i를 선언하고 i의값 1234로 선언, 단일 포인터 ptr, 이중 포인터 dptr을 선언하였습니다.
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
// 단일포인터 ptr 값이 가리키는 값이 7777로 바뀌어서 이중포인터 dptr을 통해서 i값 7777을 가리킵니다.
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
// 이중포인터 dptr이 가리키던 값이 7777에서 8888로 바뀌고 이중포인터 dptr을 통해서 i값  8888을 가리킵니다.
printf("신태양\n");
printf("2017038096");
return 0;
}