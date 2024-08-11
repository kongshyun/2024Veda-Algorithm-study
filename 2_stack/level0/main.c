
/*
1 Session - 스택(Stack) - level0

[목적: 기능구현]
- 기능만 동작하면 OK (시간복잡도 고려 X)
------------------------------------------------------------------
[스터디 메모]
#define TRUE 뒤에 괄호 하고 1을 쓰는게 좋다! 나중에 안엇갈림.

------------------------------------------------------------------
0809 혼자서 전부 다 구현해보기
*/

#include <stdio.h>
#include <assert.h>

#define TRUE (1)
#define FALSE (0)

enum { MAX_NUMS = 10 };

static int s_nums[MAX_NUMS] = { 0, };
static int s_num_count = 0;

void push(int value);
int is_empty(void);
int is_full(void);
int pop(void);

void push(int value)
{
    if(is_full()==TRUE){
        printf("FULL.\n");
        return;
    }
    s_nums[s_num_count++]=value; //value 값을 빈 곳의 끝부터 하나씩 넣는다.
}

int is_empty(void)
{
    return s_num_count==0;
}

int is_full(void)
{
    return s_num_count==MAX_NUMS;
}

int pop(void){
    if(is_empty()==TRUE){
        printf("EMPTY.\n");
        return -1;
    }
     // 끝에서부터 값을 하나씩 꺼낸다.
    return s_nums[--s_num_count];
}


/* ================== TEST ==================== */

void _initial_stack(void)
{
    int i;
    for (i = 0; i < MAX_NUMS; ++i) {
        s_nums[i] = 0;
    }
    s_num_count = 0;
}

void test1(void)
{
    _initial_stack();

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    //printf("push80 : %d, s_num_count : %d\n",s_nums[s_num_count-1],s_num_count-1); // 확인코드. 80,7
    assert(pop() == 80);
    assert(s_num_count == 7);
}

/* 빈 스택에 대해 pop() 를 시도 */
void test2(void)
{
    _initial_stack();

    pop();
    assert(s_num_count == 0);
}

/* 가득 찬 스택에 대해 push() 을 시도 */
void test3(void)
{
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
    assert(s_num_count == 10);

    push(1234);
    assert(s_num_count == 10);

    pop();
    pop();
    pop();
    pop();
    //printf("pop now : %d\n",pop()); // 확인
    pop();
    pop();
    pop();
    pop();
    pop();
    assert(s_num_count == 1);
    
    {
        int result = pop();
        assert(s_num_count == 0);
        assert(result == 10);
    }
}

int main(void)
{
    test1();
    test2();
    test3();

    return 0;
}
