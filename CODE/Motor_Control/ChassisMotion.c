/**
  ******************************************************************************
  * @file    ChassisMotion.c
  * @author  竹之武
  * @date    2021.07.22
  * @brief   麦克纳姆轮底盘运动学，请完善相关函数
  ******************************************************************************
  * @attent  
  * @myNote  
  ******************************************************************************
  */
#include "HeadFiles.h" 
#include "ChassisMotion.h"
/*
* @note 本文件假设所有必要的库都已经调用，你可以直接使用如下函数： 
* sin函数： arm_sin_f32(); //传入参数采用弧度制
* cos函数： arm_cos_f32();
*/ 

/*全局变量*/
extern Robot_t Robot;
/*
	Robot 是一个结构体变量，假设其中存放了机器人当前相对于世界坐标系的位置、姿态信息，由外部函数更新，相关变量如下：
	Robot.X; //float 类型
	Robot.Y; //float 类型
	Robot.Theta; //float 类型，表示车体坐标系相对于世界坐标系的旋转角度（弧度制），俯视逆时针为正，范围在(-PI,PI]之间 。
	根据任务要求选取并使用上述变量。
*/


//	p.s.如果觉得有必要可以在此处声明所需变量。 


/*全局函数*/
void vChassisMotionCalculation(float *Vel, float *Dir, float *Omega);

/*私有函数*/ 
static void prvSetMotorSpeed(float *MotorSpeed);


/** 
 *@brief 	本函数负责将世界坐标系下的速度信息解算到四个轮子上
 *@note 	在整个工程文件的其他代码中，这个函数会被调用以实现运动学解算。
 *@param  	Vel		: 世界坐标系下期望速度大小	[mm/s]
			Dir		: 世界坐标系下期望速度方向，弧度制，范围为(-PI，PI]
			Omega	: 世界坐标系下期望角速度大小(方向为俯视逆时针为正)	[rad/s]
*/
void vChassisMotionCalculation(float *Vel, float *Dir, float *Omega);
{
	float MotorSpeed[4] = {0,0,0,0};
	/*
	
		Write your code here.
	
	*/
	prvSetMotorSpeed(MotorSpeed); //调用私有函数，传入解算后四个轮子的转速[rad/s]。 
}



/** 
 *@brief 将传入的数组中的四个轮子的转速发送给电机驱动器并实现闭环控制
 *@param MotorSpeed	：经过解算的四个轮子各自速度的数组首地址
*/
void prvSetMotorSpeed(float *MotorSpeed)
{
	/*假设这个函数由其他人实现了,你不需要在此处编写任何代码*/
} 
