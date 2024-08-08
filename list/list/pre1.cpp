#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;//다음 노드의 주소를 저장할 포인터
} node_t;

void test_allocation(node_t* head);
void test_deallocation(node_t* head, node_t* tail);

int main(void)
{
    int i;
    node_t* head = NULL;
    node_t* tail = NULL;

    /* 연결리스트의 노드 생성 (메모리 ?? 할당) */
    for (i = 0; i < 20; ++i) {
        node_t* node = (node_t*)malloc(sizeof( node_t)) ; //malloc
        node->value = i;
        node->next = NULL;

        if (head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail=node;
        }
    }

    test_allocation(head);


    /* 연결리스트의 노드 삭제 (?? 할당된 메모리 해제) */
    for (int i = 0; i < ? ? ; ++i) {
        node_t* next_node = head->next ;
        free(head);
        head=next_node;
    }
    if (head == NULL) {
        tail = head;
    }

    test_deallocation(head, tail);


    return 0;
}

void test_allocation(train_t* head)
{
    train_t* current = head;
    for (int i = 0; i < 20; ++i) {
        assert(current != NULL);
        assert(current->value == i);
        current = current->next;
    }

    assert(current == NULL);
}

void test_deallocation(train_t* head, train_t* tail)
{
    assert(head == NULL);
    assert(tail == NULL);
}
/*
- Quiz.
    - 노드 생성 로직은 append 연산인가요? front_insert 연산인가요?
    - 연결리스트의 노드 생성 중, 생성된 노드는 몇 개 인가요?

- 동작되는 모습을 그림으로 그려보세요 
*/