#include "sort.h"
#include <stdio.h>

//버블정렬(옆에꺼랑 계속 비교)
void bubble_sort(int* array, int size)
{
    for( int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

//선택정렬(제일 작은값을 찾아서 앞에 넣기)
void selection_sort(int* array, int size)
{
    int min;
    int mini
    for(int i=0;i<size-1;i++){
        min = array[i]; //제일앞에꺼가 초기값
        for(int j=i+1;j<size;j++){
            if(array[j]<min){
                min=array[j];//작은수를 발견하면 min으로 해줌.

            }
        }
        int temp=min;
        min=array[0];
        array[0]=temp;
    }
}
