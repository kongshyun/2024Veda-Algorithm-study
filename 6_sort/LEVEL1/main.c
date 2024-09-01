#include "sort.h"
#include <assert.h>

// // qsort() 함수를 이용한 퀵 정렬 테스트 함수
// // 올바르게 작성해주세요
// void test_qsort(int* array, int size) {
//     qsort(??);

//     for (int i = 0; i < size - 1; i++) {
//         assert(array[i] <= array[i + 1]);
//     }
// }

// 정렬이 올바른지 확인하는 함수
void test_sorting_function(void (*sort_func)(int*, int), int* array, int size) {
    sort_func(array, size);
    for (int i = 0; i < size - 1; i++) {
        assert(array[i] <= array[i + 1]);
    }
}

int main() {
    int array1[] = { 5, 2, 9, 1, 5, 6 };
    int array2[] = { 3, 0, -1, 8, 7, 2 };
    int array3[] = { 1, 2, 3, 4, 5, 6 };
    int array4[] = { 9, 7, 5, 3, 1, 0 };

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int size4 = sizeof(array4) / sizeof(array4[0]);

    // 버블 정렬 테스트
    test_sorting_function(bubble_sort, array1, size1);
    test_sorting_function(bubble_sort, array2, size2);
    test_sorting_function(bubble_sort, array3, size3);
    test_sorting_function(bubble_sort, array4, size4);

    // 선택 정렬 테스트
    test_sorting_function(selection_sort, array1, size1);
    test_sorting_function(selection_sort, array2, size2);
    test_sorting_function(selection_sort, array3, size3);
    test_sorting_function(selection_sort, array4, size4);

    // // 퀵 정렬 테스트
    // test_qsort(array1, size1);
    // test_qsort(array2, size2);
    // test_qsort(array3, size3);
    // test_qsort(array4, size4);

    return 0;
}
