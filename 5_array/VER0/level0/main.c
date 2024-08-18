#include <assert.h>
#include "array.h"

int main(void) 
{
    humans_arr_t arr = { .count = 0 };
    human_t h1 = { .age = 20 };
    human_t h2 = { .age = 30 };
    human_t h3 = { .age = 40 };

    /* Append 기능 테스트 */
    assert(append(&arr, h1) == TRUE);
    assert(arr.count == 1);
    assert(arr.humans[0].age == 20);

    /* Index of 기능 테스트 */
    assert(index_of(&arr, h1) == 0);
    assert(index_of(&arr, h2) == NODE_NOT_FOUND);

    /* Insert at 기능 테스트 */ 
    assert(insert_at(&arr, h2, 0) == 0);
    assert(arr.count == 2);
    assert(arr.humans[0].age == 30);
    assert(arr.humans[1].age == 20);

    assert(insert_at(&arr, h3, 1) == 0);
    assert(arr.count == 3);
    assert(arr.humans[1].age == 40);
    assert(arr.humans[2].age == 20);

    /* Remove at 기능 테스트 */
    assert(remove_at(&arr, 1) == 0);
    assert(arr.count == 2);
    assert(arr.humans[1].age == 20);

    assert(remove_at(&arr, 0) == 0);
    assert(arr.count == 1);
    assert(arr.humans[0].age == 20);

    return 0;
}
