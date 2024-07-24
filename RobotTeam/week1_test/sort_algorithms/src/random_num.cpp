#include "global.h"

void Random_Number(vf &fn, double low, double high){
    mt19937 gen(time(NULL)); //创建随机数生成器
    uniform_real_distribution<> dis(low, high); //创建一个均匀分布随机数生成器
 
    for (int i = 1; i <= 1000; ++i) {
        fn.push_back(dis(gen)); // 生成并添加随机浮点数到向量中
    }
}