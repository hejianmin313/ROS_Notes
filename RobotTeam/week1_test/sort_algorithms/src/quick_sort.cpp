#include "global.h"

void quick_sort(vf &arr,int low, int high){
    if (high <= low) return;
    int i = low;
    int j = high;
    float key = arr[low];
    while (true)
    {
        /*从左向右找比key大的值*/
        while (arr[i] <= key)
        {
        	i++;
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[j] >= key)
        {
        	j--;
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        float temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    arr[low] = arr[j];
    arr[j] = key;
    quick_sort(arr, low, j - 1);
    quick_sort(arr, j + 1, high);
}