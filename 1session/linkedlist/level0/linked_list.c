#include "linked_list.h"





node_t* head=NULL;
node_t tail=NULL;
node_t* next_node;

node_t* get_node_or_null(const node_t* head, int id){

    for(int i=0;i<5;i++){
        if(id==3){
         
        }else{
            next_node = head->next;
        }
    }

    
}

int add(node_t** phead, node_t node);

int remove(node_t** phead, int id);

void destroy(node_t** phead);