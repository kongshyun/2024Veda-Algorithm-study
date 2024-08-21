#ifndef ARRAY_H
#define ARRAY_H

#include "human.h"

enum { ARR_NUMS = 10 };

typedef struct {
    human_t humans[ARR_NUMS];
    int count;
} humans_arr_t;

int append(humans_arr_t* arr, human_t human);

int index_of(humans_arr_t* arr, human_t human);

int insert_at(humans_arr_t* arr, human_t human, int index);

int remove_at(humans_arr_t* arr, int index);

int cleanup(humans_arr_t* arr);

#endif /* ARRAY_H */