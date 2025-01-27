## 基础篇
注：本篇题目要求**全部完成**。

### 1. Linux安装与入门：

在RoboMaster比赛中，机器人的视觉、导航等算法通常是运行在Arm架构的计算平台上，因此Linux操作系统的算法组成员必须掌握的技能，请自行寻找教程，要求**安装Linux双系统**，推荐安装**Ubuntu 22.04**。在完成安装Linux系统后，请自行学习并掌握下列基础知识：

(1) Linux文件系统的结构，掌握系统根目录下各文件目录表示的功能与含义，理解Linux系统“Everything is a file”的原则。

(2) 掌握Linux系统基本的命令，包括目录操作、文件操作、权限操作、下载操作以及一些常用的命令。

(3) 了解vim的使用，学习使用插入、换行、保存、复制、粘贴、查找、字符串的替换等基本操作。

(4) 为方便后续队内工作，可以选择性地安装VS Code、CLion等IDE、中文输入法等，不作要求。

*注：本题无需提交。*

### 2. ROS2的安装与入门：

ROS是一个适用于机器人的开源操作系统，为机器人开发与研究提供了大量可供复用的代码支持，并且拥有众多的功能包可供开发者使用。相比于ROS，ROS2引入了更多现代化的特性，在编译过程、安全性等方面有了较大的提升。ROS2是RoboMaster系列赛事中机器人开发必不可少的一环。
请自行查阅查阅资料，安装匹配**你的Linux版本的ROS2**，并自行查阅资料，完成用键盘控制小海龟，建议安装**ROS2 Humble**，适用于**Ubuntu 22.04**。

*注：本题无需提交。*

### 3. CMake基础：

CMake是一个跨平台自动化构建工具，不依赖于特定的编译器，仅需根据CMake语法编写CMakeLists.txt文件即可实现自动编译源码、创建库、生成可执行二进制文件等任务。（为了更好的理解CMake，建议自行学习CMake、Make、gcc、g++之间的关系。）请**自行安装CMake并学习有关语法**，完成下列问题：

(1) 将GitHub - browny/cmake-practice: practice cmake clone到本地，完成其中四个项目的编译，并总结如何将文件和编译后的可执行文件下载到系统中、如何编译库文件、如何将库文件链接到项目。

(2) 根据这个[CMakeLists.txt文件](https://kdocs.cn/l/cuo8qsx8Yq3R) ，回答下面的问题：

    ▪ Examples/Stereo/stereo_kitti.cc文件经过编译后生成的可执行文件叫什么，在哪个路径下生成？
    
    ▪ OpenCV_LIBS，EIGEN3_LIBS，Pangolin_LIBRARIES这三个变量是如何确定的？
    
    ▪ 这段CMakeLists.txt文件经编译后会生成库文件吗，生成路径在哪？
    
    ▪ PROJECT_NAME这个变量的值是什么，是如何确定的？

本题需要**提交一个markdown文件**，命名为**1-3**。

### 4. 三维空间刚体运动基础：
刚体运动是指一个物体在三维空间中作旋转与平移的运动，我们使用坐标变换来描述发生刚体运动的物体，从一个坐标系变换到另一个坐标系下的过程。请查询有关资料，回答下列问题：

(1) 在三维空间内描述物体的位姿需要几个自由度？

(2) 如何用矩阵描述三维空间下的刚体运动的坐标变换（欧式变换）？

(3) 简要介绍如何描述三维空间内旋转？

本题需要**提交一个markdown文件**，命名为**1-4**。


## 进阶篇
注：本篇题目可自行选择完成。尽力而为。

### 5. ROS2基础应用：

ROS2将复杂的机器人系统抽象并拆解为若干个节点（NODE），话题（topic）是节点直接交换数据的重要通道。请自行学习ROS2相关知识，**创建ROS2工作空间，实现topic收发自定义的ROS2接口数据类型，并通过param实现动态调参**。具体任务要求如下：

(1) 使用ros2 launch启动节点，而非ros2 run；

(2) 自定义发布的接口数据类型，要求包括(x, y, z)三个数据，且三个数据的基本类型都为int64；

(3) 编写yaml和launch文件，使(x, y, z)初始值分别为(100.0, 200.0, 300.0)；

(4) 订阅topic后将(x, y, z)的值直接打印到命令行，无需做其他任何操作；

(5) 两个节点启动后，新开一个命令行，通过ros2 param set操作分别独立更改(x, y, z)三个参数的值，此时订阅节点在命令行中的输出应该随之改变（即动态调参，实际效果见视频）；

(6) 使用C++或Python实现均可，有余力的同学可以尝试分别使用达到同一效果。
主要流程如下：

    1) 创建ROS2工作空间，src中添加两个功能包(分别为Publish和Subscribe节点)；
    
    2) 编写主程序、launch文件、接口文件、param的yaml描述文件；
    
    3) 编译；
    
    4) launch两个节点，使用ros2 param实现动态调参，结果录制视频。

本题提交一个**视频**，命名为**1-5**。

### 6. 深度学习基础：

计算机视觉领域的前沿成果大都是基于深度学习的，机器人上常用的视觉算法也大都是建立在深度学习框架上的。即便单纯的调用封装好的工具并不需要深度学习的知识，但对算法底层的理解一定会有益于项目开发。

(0) 说明

- 这是**视觉**方向考核的第三题，旨在帮助建立基本的深度学习知识体系、获得一定的深度学习实践经验；
- 要求提交**三道实践题**的完整项目文件(包含代码、数据和各自的结果展示)和**描述自己理解**的Markdown生成的PDF文件。

(1) 深度学习基础知识
> 如果时间较紧或感觉学习困难，可以跳过此问先行尝试后面的实践部分。深度学习框架的发展非常成熟，实践简单任务远比进行理论学习容易，故而可以在写完实践题后再回来利用实践经验更好地学习理论知识。

**不要求**系统地学习传统算法、传统机器学习算法，**不建议**专门去阅读《统计学习方法》、“西瓜书”、“花书”等经典书籍，**建议**自行寻找有脉络的网络资料进行学习，如思维导图或系列视频。算法的理解可能需要结合多篇文章、多部视频，此处抛砖引玉：[B站跟着李沐学AI](https://space.bilibili.com/1567748478/channel/collectiondetail?sid=28144)。

由于考核时间较短，学习时可以不过分注重细节，理解大体含义即可，待以后队内工作用到时再步步完善知识体系。建议学习时长最多**不超过2天**。

完成学习后，请**简述自己对以下名词的理解**，要求做到不抄袭网络资料、不做大段描述、不必做太详细的解释，不是要写针对初学者的教程，能用简短话语使本就理解的人知道你的意思即可。

    插值  上采样  感知机算法  梯度下降法  混淆矩阵  RNN和LSTM  CNN  L1范数和L2范数  交叉熵损失CrossEntropyLoss

本题答案形成一个markdown文件，命名为1-6-1.

#### 注意：做以下实践问题时不要求取得非常好的结果。实践问题的目的是帮助了解深度神经网络编写和训练的基本过程，只要方法和结构合理、程序能跑通即可。如果结果确实不理想，可在说明文件中分析其原因。

(2) 用循环网络做序列预测

说明和提示：

- 数据在./data/RNN/data.csv中。数据文件中每一行都有一串向量(x1, x2, x3, x4, x5)，其中的数值满足一定规律；
- 要求自行划分训练集和测试集，搭建深度神经网络，编写训练和测试程序，在x1~x4已知的情况下对x5做预测；
- 注意训练时不可使用测试集；
- 要求必须使用RNN类网络(如RNN、LSTM、GRU等)，不得使用直接向全连接层输入x1~x4得到x5及其他类似方法；
- 简要描述**数据处理的方法**、**网络的结构**、**训练使用的参数和最终的训练结果**，形成Markdown文件，命名为“结果说明”，与完整的项目文件一起打包，命名为1-6-2。

(3) 用卷积网络做图片分类

说明和提示：

- 数据在./data/CNN/中。所有图片的分辨率均为128*128，图片文件名x_y，x即为其标签，y为编号；
- 要求自行划分训练集和测试集，搭建深度神经网络，编写训练和测试程序，对图片进行标签分类；
- 注意训练时不可使用测试集；
- 要求必须使用CNN类网络，不得使用直接向128*128*3的全连接层输入图片得到结果及其他类似方法；
- 可以在程序中对图片进行预处理以便于神经网络识别，但不能直接改变数据文件；
- 简要描述**数据处理的方法**、**网络的结构**、**训练使用的参数和最终的训练结果**，形成Markdown生成的PDF文件，命名为“结果说明”，与完整的项目文件一起打包，命名为1-6-3。





