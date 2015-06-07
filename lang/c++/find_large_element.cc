// FILE_HEADER_START
//     File        : largeelement.c
//     Description : Use case for sort and search - 
//                   Find largest element in an array. Idea is to sort 
//                   them ascending and return the highest index element 
//                   in the list. Implemented QuickSort (Any sort will do
//                   but Quick sort is one of the fatest among other 
//                   sorting algos).
//     Author      : Lavanya Kumar
// FILE_HEADER_END
#include <iostream>

using namespace std;

// static functions have local visibilty in a given source file
// inline function wont have any stack push/pop (all functions parameters
// are pushed and popped off process stack).
static inline int swap(int *arr, int a, int b)
{
    int swap = arr[a];
    arr[a] = arr[b];
    arr[b] = swap;
}

// Typical quick sort implementation. Please refer to online documentation
// for quick sort.
int partition(int *arr, int lo, int hi, unsigned char ascending)
{
    int pivotIdx = (lo + hi)/2;
    int pivot = arr[pivotIdx], i;
    int store = lo;

    swap(arr, hi, pivotIdx);
    for (i = lo; i < hi-1; i++) {
        if ((ascending && arr[i] <= pivot) ||
            (!ascending && arr[i] >= pivot)) {
            swap(arr, store, i);
            store++;
        }
    }
    swap(arr, store, hi);

    return store;
}

void quicksort(int *arr, int lo, int hi, unsigned char ascending)
{
    if (lo > hi)
        return;
    int pivot = partition(arr, lo, hi, ascending);
    quicksort(arr, lo, pivot-1, ascending);
    quicksort(arr, pivot+1, hi, ascending);
}

int main(int argc, const char *argv[])
{
    int array[10] = {5,2,3,1,4,6,9,8,7,10};
    
    /* We will try to sort elements and then get the largest */
    /* Quick Sort - Asending order */
    quicksort(array, 0, 9, 1);
    
    cout << "Larget value is "<< array[9] << "\n";

    return 0;
}
