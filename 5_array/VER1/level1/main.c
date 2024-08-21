#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "array.h"
#define TRUE (1)
#define FALSE (0)
int main(void)
{
    humans_arr_t arr = { .count = 0 };
    human_t h1 = { .name = "Alice", .age = 20 };
    human_t h2 = { .name = "Bob", .age = 30 };
    human_t h3 = { .name = "Charlie", .age = 40 };
    human_t h4 = { .name = "David", .age = 50 };

    // Append 기능 테스트
    assert(append(&arr, h1) == TRUE);
    assert(append(&arr, h2) == TRUE);
    assert(append(&arr, h3) == TRUE);
    assert(arr.count == 3);
    assert(strcmp(arr.humans[0].name, "Alice") == 0 && arr.humans[0].age == 20);
    assert(strcmp(arr.humans[1].name, "Bob") == 0 && arr.humans[1].age == 30);
    assert(strcmp(arr.humans[2].name, "Charlie") == 0 && arr.humans[2].age == 40);
    
    assert(append(&arr, h4) == TRUE);
    assert(arr.count == 4);
    assert(strcmp(arr.humans[3].name, "David") == 0 && arr.humans[3].age == 50);

    // Insert at 기능 테스트
    assert(insert_at(&arr, h4, 1) == TRUE);
    assert(arr.count == 5);
    for(int i=0;i<5;i++){
        printf("name  : %s \n",arr.humans[i].name);
    }
    
    assert((strcmp(arr.humans[0].name, "Alice") == 0 || strcmp(arr.humans[0].name, "Bob") == 0 || strcmp(arr.humans[0].name, "Charlie") == 0));
    assert(strcmp(arr.humans[1].name, "David") == 0 && arr.humans[1].age == 50);
    assert((strcmp(arr.humans[2].name, "Alice") == 0 || strcmp(arr.humans[2].name, "Bob") == 0 || strcmp(arr.humans[2].name, "Charlie") == 0 || strcmp(arr.humans[2].name, arr.humans[0].name) == 0));
    assert((strcmp(arr.humans[3].name, "Alice") == 0 || strcmp(arr.humans[3].name, "Bob") == 0 || strcmp(arr.humans[3].name, "Charlie") == 0 || strcmp(arr.humans[3].name, arr.humans[0].name) == 0 || strcmp(arr.humans[3].name, arr.humans[2].name) == 0));

    // Remove at 기능 테스트
    assert(remove_at(&arr, 1) == TRUE);
    assert(arr.count == 4);
    assert((strcmp(arr.humans[0].name, "Alice") == 0 || strcmp(arr.humans[0].name, "Bob") == 0 || strcmp(arr.humans[0].name, "Charlie") == 0)||strcmp(arr.humans[1].name, "David") == 0);
    assert((strcmp(arr.humans[1].name, "Alice") == 0 || strcmp(arr.humans[1].name, "Bob") == 0 || strcmp(arr.humans[1].name, "Charlie") == 0)||strcmp(arr.humans[1].name, "David") == 0);
    assert((strcmp(arr.humans[2].name, "Alice") == 0 || strcmp(arr.humans[2].name, "Bob") == 0 || strcmp(arr.humans[2].name, "Charlie") == 0)||strcmp(arr.humans[1].name, "David") == 0);
    assert((strcmp(arr.humans[3].name, "Alice") == 0 || strcmp(arr.humans[3].name, "Bob") == 0 || strcmp(arr.humans[3].name, "Charlie") == 0)||strcmp(arr.humans[1].name, "David") == 0);

    return 0;
}
