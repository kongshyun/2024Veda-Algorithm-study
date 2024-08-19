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
        return 0;
    }
    for(int i=0; i<arr->count;i++){
        
    }
    arr->humans[index]=human;
    arr -> count++;
    return TRUE;
}

int remove_at(humans_arr_t* arr, int index){
    
}

/*
#include <stdio.h>
#include "array.h"
#include "human.h"

// 배열의 맨 마지막에 삽입
int append(humans_arr_t* arr, human_t human) {
    if (arr->count >= ARR_NUMS) {
        return FALSE;  // 배열이 가득 찼으면 FALSE 리턴
    }
    arr->humans[arr->count] = human;
    arr->count++;
    return TRUE;
}

// 특정 human이 배열의 어느 위치에 있는지 찾기 (인덱스 리턴)
int index_of(humans_arr_t* arr, human_t human) {
    for (int i = 0; i < arr->count; i++) {
        if (arr->humans[i].age == human.age) {
            return i;
        }
    }
    return NODE_NOT_FOUND;
}

// 특정 위치에 human 삽입
int insert_at(humans_arr_t* arr, human_t human, int index) {
    if (index < 0 || index > arr->count || arr->count >= ARR_NUMS) {
        return FALSE;  // 인덱스가 잘못됐거나 배열이 가득 찼으면 FALSE 리턴
    }
    for (int i = arr->count; i > index; i--) {
        arr->humans[i] = arr->humans[i - 1];
    }
    arr->humans[index] = human;
    arr->count++;
    return TRUE;
}

// 특정 위치에서 human 제거
int remove_at(humans_arr_t* arr, int index) {
    if (index < 0 || index >= arr->count) {
        return FALSE;  // 인덱스가 잘못됐으면 FALSE 리턴
    }
    for (int i = index; i < arr->count - 1; i++) {
        arr->humans[i] = arr->humans[i + 1];
    }
    arr->count--;
    return TRUE;
}
*/