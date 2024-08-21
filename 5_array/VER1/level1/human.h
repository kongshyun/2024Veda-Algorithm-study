#ifndef HUMAN_H
#define HUMAN_H

enum { MAX_NAME_LENGTH = 50 };

typedef struct {
    char name[MAX_NAME_LENGTH + 1];
    int age;
} human_t;

#endif /* HUMAN_H */