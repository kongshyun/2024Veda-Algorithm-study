#ifndef LINKED_LIST_H
#define LINEKED_LIST_H

#include "node.h"

#define TRUE (1)
#define FALSE (0)

// void print_node(const node_t* head); // 자유구현


typedef struct node{
    int id;
    int value;
    struct node* next;
}node_t;

node_t* get_node_or_null(const node_t* head, int id);

int add(node_t** phead, node_t node);

int remove(node_t** phead, int id);

void destroy(node_t** phead);

#endif //LIST_H