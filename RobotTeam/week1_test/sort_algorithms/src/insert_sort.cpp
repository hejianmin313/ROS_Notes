#include "global.h"

void insert_sort(vf &arr)
{
    int i,j,n=arr.size();
    float key;
    for(i=1;i<n;i++){
        key=arr[i];
     //Insert key into the sorted subarray arr[0:i-1];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}