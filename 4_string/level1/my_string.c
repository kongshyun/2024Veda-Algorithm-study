
//포인터로 구하기

#include "my_string.h"
#include <stdio.h>
#include <string.h>

#define TRUE (1)
#define FALSE (0)


size_t my_strlen(const char *str)
{
    int i=0;
    //NULL이 나올때까지 문자열의 앞에서부터 문자 하나씩 검색??
    while(TRUE){
        printf("HI\n");
        if(*str>0){ // char가 한개 있으면 1바이트 이므로 통과!
            *str++; // 다음 문자
            i++;
        }
        else if (*str==0){ //문자열 끝까지 도달하면NULL이므로 끝!
            break;
        }
    }
    printf("NO!");

    return i;
}


//n개 바이트를 value로 채운다.
void* my_memset(void* ptr, int value, size_t n){
    char *p=(char *)ptr; // 새로운 문자열
    //포인터의 위치를 하나씩 증가시키며 각각 value를 넣어준다. n 바이트가됨.
    for(int i=0;i<n;i++){
        *p++=value;
    }
    return ptr;
}

//뒤에 갖다 붙이는게 아니고 dest자리에 src를 넣는것.
void* my_memcpy(void* dest, const void* src, size_t n){
    char *p=dest;
    const char *s=src;
    while(n--)
        *p++ = *s++;
    return dest;
}


//길이가 같으면 0 , ptr1이 크면 양수, ptr2가 크면 음수
int my_memcmp(const void* ptr1, const void* ptr2, size_t n){
    const char* p1=ptr1;
    const char* p2=ptr2;
    int i=0,j=0;
    for(*p1;*p1!=0;*p1++){
        i++;
    }
    for(*p2;*p2!=0;*p2++){
        j++;
    }
    if(i==j) return 0;
    else if(i>j) return 1;
    else if(i<j) return -1;   

}
