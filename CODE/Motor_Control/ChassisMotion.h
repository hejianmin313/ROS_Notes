/**
  ******************************************************************************
  * @file    ChassisMotion.h
  * @author  竹之武
  * @date    2021.07.22
  * @brief   麦克纳姆轮底盘运动学，请完善相关函数
  ******************************************************************************
  * @attent  头文件没有什么需要删改的地方_(:з」∠)_，注意需要使用那些宏定义即可
  * @myNote  
  ******************************************************************************
  */
#include "HeadFiles.h"

#ifndef ChassisMotion_H 
#define ChassisMotion_H 


#define Wheel_D  	152.5       //单位[mm]
#define Chassis_X 	200			  //单位[mm]
#define Chassis_Y 	200			  //单位[mm]


/*全局函数*/ 
void vChassisMotionCalculation(float *Vel, float *Dir, float *Omega);


#endif
