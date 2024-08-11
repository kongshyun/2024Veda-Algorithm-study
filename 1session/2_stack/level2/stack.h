#ifndef STACK_H
#define STACK_H

#define TRUE (1)
#define FALSE (0)

enum { MAX_NUMS = 10 };

// 함수 선언
void push(int value);
int is_empty(void);
int is_full(void);
int pop(void);
void _initial_stack(void); // 테스트 목적 함수
int get_count(void); // 테스트 목적 함수

#endif /* STACK_H */