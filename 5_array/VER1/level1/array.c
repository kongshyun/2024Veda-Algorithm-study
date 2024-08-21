#include "array.h"
#include <string.h>
#include <stdio.h>

#define TRUE (1)
#define FALSE (0)

int append(humans_arr_t* arr, human_t human){
    if(arr->count >=ARR_NUMS){
        return FALSE;
    }
    arr->humans[arr->count++]=human;
    return TRUE;
}

int index_of(humans_arr_t* arr, human_t human){
    for(int i=0;i<arr->count;i++){
        if(arr->humans[i].age==human.age){
            return i;
        }
    }
    return FALSE;
}

//index자리의 값을 빼기!!!!!!
int pop(humans_arr_t* arr,int index){

}
int insert_at(humans_arr_t* arr, human_t human, int index){
    if(arr->humans[index].name==0 && arr->humans[index].age==0){
        
        strcmp(arr->humans[index].name,human.name);
        arr->humans[index].age=human.age;
        
        return TRUE;
    }else{
        for(int i=arr->count;i>=index;i--){
            //printf("David : %s",arr->humans[index].name);
            arr->humans[i+1]=arr->humans[i];
        }
        arr->count++;
        return TRUE;
    }
    return FALSE;
}

int remove_at(humans_arr_t* arr, int index){

}

int cleanup(humans_arr_t* arr){

}
