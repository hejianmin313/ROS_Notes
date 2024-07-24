# STM32

## 简介

> STM32是ST公司基于ARM Cortex-M内核开发的32为微控制器

![image-20240713100318156](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713100318156.png)

![image-20240713100406719](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713100406719.png)

![image-20240713100412586](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713100412586.png)

A-applocation  R-real time  M-micro controller 

### **STM32F103C8T6**

* 系列：主流系列STM32F1
* 内核：ARM Cortex-M3
* 主频：72MHz
* RAM：20K（SRAM）（）
* ROM：64K（Flash）
* 供电：2.0~3.6V（标准3.3V）
* 封装：LQFP48

![image-20240713100714687](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713100714687.png)

### 外设（peripheral）

主要学习的是STM32的外设，通过程序调用这些外设

| **英文缩写** | **名称**               | **英文缩写** | **名称**           |
| ------------ | ---------------------- | ------------ | ------------------ |
| **NVIC**     | **嵌套向量中断控制器** | CAN          | CAN通信            |
| **SysTick**  | **系统滴答定时器**     | USB          | USB通信            |
| RCC          | 复位和时钟控制         | RTC          | 实时时钟           |
| GPIO         | 通用IO口               | CRC          | CRC校验            |
| AFIO         | 复用IO口               | PWR          | 电源控制           |
| EXTI         | 外部中断               | BKP          | 备份寄存器         |
| TIM          | 定时器                 | IWDG         | 独立看门狗         |
| ADC          | 模数转换器             | WWDG         | 窗口看门狗         |
| DMA          | 直接内存访问           | DAC          | 数模转换器         |
| USART        | 同步/异步串口通信      | SDIO         | SD卡接口           |
| I2C          | I2C通信                | FSMC         | 可变静态存储控制器 |
| SPI          | SPI通信                | USB OTG      | USB主机接口        |

(标黑的为ARM内核的外设)

STM32可以加入操作系统比如FreeRTOS、UCOS等

### System architecture

<img src="C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713104320516.png" alt="image-20240713104320516" style="zoom:200%;" />

### Pin

red - 电源相关引脚

blue-最小系统相关引脚

green-IO口、功能口

S代表电源

FT-能承受5V电压





![STM32F103C8T6引脚定义](F:\STM32\参考文档\参考文档\STM32F103C8T6引脚定义.png)

调试端口用来调试程序和**下载程序**

两种调试方式

（STLINK）SWD：SWDIO和SWCLK（PA13和PA14）两个端口

JATG：JTMS，JTCK，JTDI，JTDO，NJTRST



![image-20240713120307560](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240713120307560.png)

系统存储器被选为启动区域--选用串口下载程序

