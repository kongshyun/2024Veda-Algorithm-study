// # 🚨제약조건:
// - 인덱스 연산([ ])으로 구현한다.


#include "my_string.h"
#include <stdio.h>
#include <string.h>

#define TRUE (1)
#define FALSE (0)

//First(내가 한 코드) --> 너무 길다!!!
/*
size_t my_strlen(const char *str)
{
    int i=0;
    //NULL이 나올때까지 문자열의 앞에서부터 문자 하나씩 검색??
    while(TRUE){
        //printf("HI\n");
        if(str[i]!=0){ // char가 한개 있으면 1바이트 이므로 통과!
            i++; // 다음 문자를 검색해라
        }
        else if (str[i]==0){ //문자열 끝까지 도달하면NULL이므로 끝!
            break;
        }
        // NULL 도 sizeof하면 1이다.
    }
    printf("NO!");
    printf("%d\n", i);
    return i;
}
*/

//Second (간단하게 해보자)
size_t my_strlen(const char *str)
{

    for(int i=0; str[i]!=0;i++){
    }
    int i;
    printf("%d\n",i-1);
    return i-1;
}


/*
char* my_strcpy(char *dest, const char *src)
{

}

int my_strcmp(const char *str1, const char *str2)
{

}

void* my_memcpy(void* dest, const void* src, size_t n)
{

}

void* my_memset(void* ptr, int value, size_t n)
{

}

int my_memcmp(const void* ptr1, const void* ptr2, size_t n)
{

}
*/