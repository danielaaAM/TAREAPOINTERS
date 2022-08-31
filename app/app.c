#include "pointers.h"
int main(void)
{
    int count = 8;
    int arr[] = { 40, 30, 10, 70, 50, 20, 60, 10 };
    int arr2[] = { 40, 30, 10, 70, 50, 20, 60, 10 };
    int arr3[] = { 40, 30, 10, 70, 50, 20, 60, 10 };
    int arr4[] = { 40, 30, 10, 70, 50, 20, 60, 10 };

     bubble_sort(arr, count);
     insertion_sort(arr2, count);
     reverse(arr3, count);
     int x = 0;
     calulate_frequency(arr4, count, x);

    return 0;

}
