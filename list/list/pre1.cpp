#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;//���� ����� �ּҸ� ������ ������
} node_t;

void test_allocation(node_t* head);
void test_deallocation(node_t* head, node_t* tail);

int main(void)
{
    int i;
    node_t* head = NULL;
    node_t* tail = NULL;

    /* ���Ḯ��Ʈ�� ��� ���� (�޸� ?? �Ҵ�) */
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


    /* ���Ḯ��Ʈ�� ��� ���� (?? �Ҵ�� �޸� ����) */
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
    - ��� ���� ������ append �����ΰ���? front_insert �����ΰ���?
    - ���Ḯ��Ʈ�� ��� ���� ��, ������ ���� �� �� �ΰ���?

- ���۵Ǵ� ����� �׸����� �׷������� 
*/