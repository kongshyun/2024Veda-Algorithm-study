/*빠른정렬*/

#include <stdio.h>

int split(int *array, int size) {
    int pivot = array[0];// 피벗은 제일 첫번째 숫자
    int left = 1; // L 포인터는 array[1]
    int right = size-1; //R포인터는 마지막 인덱스

    while(1)
    {
        while(array[left]<pivot){
            left++; // pivot 보다 작은수를 찾을때까지 L포인터 이동
        }
        while(array[right]>pivot) {
            right--;
        }

        if(left>=right) break;

        swap(array+left,array+right);
        // int temp=array[left];
        // array[left]=array[right];
        // array[right]=temp;
        // left와 right 값을 교환
    }
    swap(array,array+r ight);
    return right;
}