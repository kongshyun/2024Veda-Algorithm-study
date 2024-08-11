
/* 혀니 C 코딩 */


#include <stdio.h>
#include <stdlib.h>// maaloc,free
#include <assert.h>

#define TRUE (1)
#define FALSE (0)

enum {MAX_NUMS=10}; //상수 선언
//#define이나 const도 있지만 열거형을 사용하면 상수들을 한데 묶어 사용 가능



//노드를 담당하는 노드 구조체를 만들어 줘야함\
한개의 노드는 변수값 1개, 포인터값1개를 가짐.
typedef struct node{
    int value;
    struct node* next;
    //다음 노드의 주소를 저장하는 포인터 여야 하므로, 노드형의 포인터 변수 선언
}node_t;

node_t* head=NULL;//첫 노드의 주소를 저장하는 포인터(8byte)  
node_t* tail=NULL;

int s_nums[MAX_NUMS];
int s_num_count =0;

//삽입
int push(int data)
{
    node_t* newNode;
    newNode=(node_t*)malloc(sizeof(node_t)); // 노드 생성!
    newNode->value=data;
    newNode ->next=NULL;
    if( head==NULL){
         head=newNode;
         return;
    }//head가 newNode를 가르킴
    newNode ->next=head;
    head=newNode;//newNode가 다시 head가됨.
}



//삭제
int pop(){

    node_t* delNode;
    delNode =head;
    while(head!=NULL){
        head=head->next;   // next는 어떻게 head의 next인지 아나?
        free(delNode); // delNode값을 삭제한다.
        delNode=head; //delNode를 다 시 head로 위치
    }
    //while문 종료후 -> head == NULL, delNode == NULL
}


int is_pull(){
    return s_num_count == MAX_NUMS;
}

int is_empty(){
    return s_num_count==0;
}


//테스트코드1
void test1(){

}
int main()
{
    test1();
    return 0;
}