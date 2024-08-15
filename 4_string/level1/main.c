#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "my_string.h"

int main() {
    
    // // 1. strlen 테스트
    // assert(strlen("") == my_strlen("")); 
    // assert(strlen("a") == my_strlen("a"));
    // assert(strlen("Hello") == my_strlen("Hello"));
    // assert(strlen("Hello\0World") == my_strlen("Hello"));
    

    // // 2. strcpy 테스트
    // char dest1[50];
    // assert(strcmp(strcpy(dest1, ""), my_strcpy(dest1, "")) == 0);
    // assert(strcmp(strcpy(dest1, "Hello"), my_strcpy(dest1, "Hello")) == 0);


    // // 3. strcmp 테스트
    // assert(strcmp("apple", "apple") == my_strcmp("apple", "apple"));
    // assert(strcmp("apple", "apples") == my_strcmp("apple", "apples"));
    // assert(strcmp("apples", "apple") == my_strcmp("apples", "apple"));
    // assert(strcmp("apple", "banana") == my_strcmp("apple", "banana"));
    // assert(strcmp("banana", "apple") == my_strcmp("banana", "apple"));
    // assert(strcmp("", "") == my_strcmp("", ""));
    // assert(strcmp("a", "") == my_strcmp("a", ""));
    // assert(strcmp("", "a") == my_strcmp("", "a"));
    

    // // 4. memcpy 테스트
    // char src2[50] = "Sample text";
    // char dest3[50];
    // assert(memcmp(memcpy(dest3, src2, strlen(src2) + 1), my_memcpy(dest3, src2, strlen(src2) + 1), strlen(src2) + 1) == 0);

    // char src3[50] = "Another text";
    // assert(memcmp(memcpy(dest3, src3, 7), my_memcpy(dest3, src3, 7), 7) == 0);


    // // 5. memset 테스트
    // char buffer[50];
    // assert(memcmp(memset(buffer, 'A', 10), my_memset(buffer, 'A', 10), 10) == 0);
    
    // memset(buffer, 0, 10);
    // my_memset(buffer, 0, 10);
    // for (int i = 0; i < 10; i++) {
    //     assert(buffer[i] == 0);
    // }

    // assert(memcmp(memset(buffer, 'B', 5), my_memset(buffer, 'B', 5), 5) == 0);
    

    // 6. memcmp 테스트
    char mem1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char mem2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char mem3[10] = {1, 2, 3, 4, 0, 6, 7, 8, 9, 10};
    assert(memcmp(mem1, mem2, 10) == my_memcmp(mem1, mem2, 10));
    assert(memcmp(mem1, mem3, 10) == my_memcmp(mem1, mem3, 10));
    assert(memcmp(mem1, mem3, 4) == my_memcmp(mem1, mem3, 4));

    char mem4[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    assert(memcmp(mem1, mem4, 10) == my_memcmp(mem1, mem4, 10));

    return 0;
}
