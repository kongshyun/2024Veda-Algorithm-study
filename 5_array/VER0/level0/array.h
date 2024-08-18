#ifndef ARRAY_H
#define ARRAY_H

#include "human.h"

#define TRUE (1)
#define FALSE (0)

enum { NODE_NOT_FOUND = -1 };

enum { ARR_NUMS = 10 };

typedef struct {
    human_t humans[ARR_NUMS];
    int count;
} humans_arr_t;

int append(humans_arr_t* arr, human_t human);

int index_of(humans_arr_t* arr, human_t human);

int insert_at(humans_arr_t* arr, human_t human, int index);

int remove_at(humans_arr_t* arr, int index);

#endif /* ARRAY_H */