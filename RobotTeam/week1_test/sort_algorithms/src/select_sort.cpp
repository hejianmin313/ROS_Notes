#include "global.h"

void select_sort(vf &S)
{
    int n = S.size()-1;
    int i,j,smallest;
    for(i = 0;i<=n-1;i++){
        smallest = i;
        for(j=i+1;j<=n;j++){
            if(S[j]<S[smallest])
               smallest = j;
            float temp = S[i];
        	S[i]=S[smallest];
        	S[smallest]=temp;
        }
    }
}