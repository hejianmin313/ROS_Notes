#include "global.h"

void bubble_sort(vf &A){
    int i,j,n=A.size();
    for(i=0;i<n-1;i++){
        for(j=n-1;j>=i+1;j--){
            if(A[j]<A[j-1]) //交换两个数，最小的数‘沉底’
            {
                float temp;
                temp = A[j];
                A[j] = A[j-1];
                A[j-1]=temp;
            }
        }
    }
}