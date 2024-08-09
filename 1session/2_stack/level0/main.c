
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

/*  값을 끝에서부터 하나씩 넣어줌 / 가득 찬 상태이면 한칸씩 앞으로 밀고 제일 끝에 다시 넣어줌. */
void push(int value)
{
    if(is_full()==TRUE){
        printf("FULL.\n");
        for(int i=MAX_NUMS-1;i>0;i--){
            s_nums[i-1]=s_nums[i]; 
            //한칸씩 앞으로 값을 넘긴다.  s[10]값이 s[9]로, s[9]값이 s[8]로,,,
            //앞으로 한칸씩 밀어서 s_nums[MAX-1]자리를 비워준다.
        }
        s_nums[MAX_NUMS -1] = value; // s[MAX] 비었으므로 value 값을 넣어준다.
    }else{
        s_nums[s_num_count++] = value; //빈공간의 끝에서부터 value값을 push한다.
    }    
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
    return s_nums[s_num_count--]; // 끝에서부터 값을 하나씩 꺼낸다.
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
