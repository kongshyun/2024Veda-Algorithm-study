#include "linked_list.h"
#include <stdlib.h>

node_t* head=NULL;
node_t* tail=NULL;

node_t* get_node_or_null(const node_t* head, int id){
    node_t current= *head;
    for(int i=0;i<5;i++){ 
        if(current.id==id){
            break;
            
        }else{
            head->next;
        }
    }
    return current.id;

    
}

int add(node_t** phead, node_t node)
{
    node_t* new_node;
    new_node
}

int remove(node_t** phead, int id)
{

}

void destroy(node_t** phead)
{

}