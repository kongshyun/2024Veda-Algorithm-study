/*

[목적]
    - 이론적 효율성을 고려한, 구현
        - 연결리스트를 이용했을때의 연산(검색, 삽입, 삭제) 효율성 이해하고, 적어오기
--------------------------------------------------------------------------------

*/

#include "linked_list.h"
#include <assert.h>

int main(void)
{
    node_t* head = NULL;

    node_t node1;
    node1.id = 1;
    node1.value = 3;

    node_t node2;
    node2.id = 2;
    node2.value = 9;

    node_t node3;
    node3.id = 3;
    node3.value = 20;

    node_t node4;
    node4.id = 4;
    node4.value = 5;

    node_t node5;
    node5.id = 5;
    node5.value = 5;

    assert(add(&head, node1) == TRUE); 
    assert(add(&head, node2) == TRUE);
    assert(add(&head, node3) == TRUE);
    assert(add(&head, node4) == TRUE);
    assert(add(&head, node5) == TRUE);

    node_t* node = get_node_or_null(head, 20);;
    assert(node->id == 3);
    assert(node->value == 20);


    node_t* node = get_node_or_null(head, 20);;
    assert(node->id == 5);
    assert(node->value == 5);


    assert(remove(&head, 20) == TRUE);
    assert(remove(&head, 20) == FALSE);
    assert(remove(&head, 999) == FALSE);

    destroy(&head);
    assert(head == NULL); 

    return 0;
}