/*
stack level2

[목적]
: 헤더파일과 구현체 파일 분리 이해하기
    - 분리된 소스코드의 빌드 이해
    - 인클루드 가드 이해하기

1. 인클루드 가드 작성해보기 
    ifndef , define, endif
2. stack.h의 인터페이스를 stack.c파일에 구현하기
3. main.c에서 기능 테스트 코드 구현하기
*/

#include "stack.h"
#include <stdio.h>
#include <assert.h>
void test1(void) {
    _initial_stack();

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);

    assert(pop() == 80);
    assert(get_count() == 7);
}

void test2(void) {
    _initial_stack();

    pop();
    assert(get_count() == 0);
}

void test3(void) {
    _initial_stack();

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    assert(get_count() == 10);

    push(1234);
    assert(get_count() == 10);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    assert(get_count() == 1);
    
    {
        int result = pop();
        assert(get_count() == 0);
        assert(result == 10);
    }
}

int main(void) {
    test1();
    test2();
    test3();

    return 0;
}