#include <stdio.h>


int main()
{
    int nums[] = { 200, 75, 999 };
    int* p = nums; /* 변수 nums의 주소는 0x104라 가정 */
    int num = *p++;
    printf("num : %d\n p : %d",num,p);
}




