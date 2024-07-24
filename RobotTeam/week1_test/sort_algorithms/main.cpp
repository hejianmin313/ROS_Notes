#include "global.h"

vf fn; //创建vector<float> fn

int main(){
    // freopen("bubble.out","w",stdout);
    // freopen("insert.out","w",stdout);
    // freopen("select.out","w",stdout);
    freopen("qsort.out","w",stdout);  //文件重定向
    Random_Number(fn,0.0,100.0); //生成0~100之间的随机浮点数
    // bubble_sort(fn);
    // insert_sort(fn);
    // select_sort(fn);
    quick_sort(fn,0,fn.size()-1);
    for(auto it=fn.begin();it!=fn.end();it++) cout << *it << endl;
}