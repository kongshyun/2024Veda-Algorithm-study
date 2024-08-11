#include "stack.h"
#include <stdio.h>

static int s_nums[MAX_NUMS] = { 0, };
static int s_num_count = 0;

void push(int value) {
    if (is_full() == TRUE) {
        printf("FULL.\n");
        for (int i = 1; i < MAX_NUMS; i++) {
            s_nums[i - 1] = s_nums[i];
        }
        s_nums[MAX_NUMS - 1] = value;
    } else {
        s_nums[s_num_count++] = value;
    }
}

int is_empty(void) {
    return s_num_count == 0;
}

int is_full(void) {
    return s_num_count == MAX_NUMS;
}

int pop(void) {
    if (is_empty() == TRUE) {
        printf("EMPTY.\n");
        return -1;
    }
    return s_nums[--s_num_count];
}

void _initial_stack(void) {
    for (int i = 0; i < MAX_NUMS; i++) {
        s_nums[i] = 0;
    }
    s_num_count = 0;
}

int get_count(void) {
    return s_num_count;
}
