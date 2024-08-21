/*시간복잡도 계산

인덱스에 접근할때마다 O(1)

*/

#include <stdio.h>
#include "array.h"
#include "human.h"

//배열의 맨 마지막에 삽입
int append(humans_arr_t* arr, human_t human){
    if((arr->count) >=ARR_NUMS){
        return FALSE;
    }
    arr->humans[arr->count++]=human;
    return TRUE;
}

//특정값의 위치 인덱스 값 알아내기   -> 시간복잡도 O(n)
int index_of(humans_arr_t* arr, human_t human){
    for(int i=0;i<arr->count;i++){
        if(arr->humans[i].age == human.age){
            return i;
        }
    }
    return NODE_NOT_FOUND;
}

//index 위치에 human 삽입
int insert_at(humans_arr_t* arr, human_t human, int index){

    if(arr->humans[index].age !=0){
        for(int i=arr->count;i>=index;i--){
            arr->humans[i+1]=arr->humans[i];
        }
        arr->count++; // 한번씩 뒤로 밀었으니까 count도 1 증가
        arr->humans[index]=human;
        return TRUE;
    }
    else{
        arr->humans[index]=human;
        return TRUE;// 
    }

    return FALSE;
    
}

int remove_at(humans_arr_t* arr, int index){
    
}
