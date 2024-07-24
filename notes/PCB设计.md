# PCB设计

![image-20240720174020240](C:\Users\何健民\AppData\Roaming\Typora\typora-user-images\image-20240720174020240.png)

阻焊：防止管脚被绿油覆盖

Ctrl+M:测量

shift+C:取消测量

![img](https://i1.hdslb.com/bfs/face/646cfca653f2fa0e785185291884cda03aa15202.jpg@96w_96h_1c_1s_!web-avatar.avif)





第4课 AD的工程组成及创建.mp4 P4 - 00:39





![img](https://i0.hdslb.com/bfs/note/f3386460b25862b350be10a48b703d7092dff8b5.png@626w_!web-note.webp)

创建工程：



- 文件---新的---项目---PCB---<Default>---改名字---选择放置路径



- 创建元件库：文件---新的---库---原理图库---Ctrl+S保存---改名字---选择放置路径



- 创建原理图：文件---新的---原理图---Ctrl+S保存---改名字---选择放置路径



- 创建PCB元件库：文件---新的---库---PCB元件库---Ctrl+S保存---改名字---选择放置路径



直接创建原理图或PCB而不新建工程会变成零散的文件，无法进行交互关联，不好管理。





第5课 元件库介绍及电阻容模型的创建... P5 - 00:33



- 右下角Panels的恢复方法:视图---打开状态栏



- 调出元件库列表：Panels--SCH Library

​      左下角添加元件，双击元件可进行编辑

 	  Design Item ID:名字（RES：电阻；CAP：电容）



- 元件符号的组成：元件边框、管脚（管脚序号和管脚名称）、元件名称、元件说明



- 绘制电阻模型：

​		1.	放置管脚



![img](https://i0.hdslb.com/bfs/note/fa556671d728793e7454e12f761c52dff661717d.png@610w_!web-note.webp)

或者 放置---管脚

​	2.放置时按Tab键 对管脚的属性进行设置，

​		可对管脚号和名称进行设置，

​		Pin Length可设置管脚长度，

​		Inside可设置形状，

​		Line Width可设置线宽，一般默认No Symbols设置好后按回车放置

​      有四个点的一端叫电气连接点，具有电气属性，注意不要防反。



​	3.绘制形状

![img](https://i0.hdslb.com/bfs/note/39b6bdc3ea5e2b7396422a12715587667e14bb57.png@610w_!web-note.webp)

​	（调整是根据格点进行的，可在视图---栅格---设置捕捉栅格 进行调节）



​	两边最好对称



​	调整颜色：选中之后在属性里变更



​	放置管脚时建议栅格设置成100mil



​	放置第二个管脚：可点击第一个管脚并按住Shift键拖动复制



​	可把名称（Name）隐藏



​	4.元件描述：Description 可写供应商、连接、选型、官网链接等



​	5.Designator 表示位号，电阻一般写R？，电容C?，芯片U?



​	6.Footprint 封装，也可在下面Add Footprint添加



（无极性电容与电阻绘制方法类似）





第6课 IC类元件模型的创建.mp4 P6 - 01:01



1. 在原理图中直接复制型号进行命名



 2.先放置外框

![img](https://i0.hdslb.com/bfs/note/a3c39ad5145b5dd7f8c9ebc5c58ab2e2dc810f4d.png@610w_!web-note.webp)

---放置管脚（注意管脚号与原理图相对应）---整体框选，按M、S移动---双击管脚对管脚名称进行改变---Comment填芯片型号



3.更改管脚名称方向，属性拉到最下面Name，勾选用户定义位置（Custom Positision）--- Orientation选90°---距离（Margin）也可更改，默认为0



4.在输名字时加 \ 可在名称上加上划线



5.框选要调整的元件按快捷键A，进行对齐（或A、L）



6.自定义快捷键：鼠标放在菜单命令上按住Ctrl键并点击---在下方快捷键--可选的一栏改更改

![img](https://i0.hdslb.com/bfs/note/53b9d5eb684224204de16463edb5eb8d1065b65d.png@610w_!web-note.webp)





第7课 排针类元件模型的创建.mp4 P7 - 00:38



1.新建快捷键：T、C   	复制名称

2.放置管脚，建议不要隐藏管脚号（做封装库时焊盘上的管脚与管脚号相对应）

3.放置多个管脚 ：

​	选中管脚---Ctrl+C---编辑---阵列式粘贴





第8课 光耦及二极管元件模型的创建.mp4 P8 - 00:19



1.绘制二极管

![img](https://i0.hdslb.com/bfs/note/550dd98d80c3806250800b76708df8928a57d9f4.png@620w_!web-note.webp)

绘制好后双击，对边框和填充颜色进行调整

调整栅格：V---G---S

2.线上箭头绘制方式

​	①用多边形

​	②双击线条，End Line Shape

复制：按住Shift拖动





第9课 现有元件模型的调用.mp4 P9 - 00:11



1.从原理图直接生成原理图库，可复制到自己的元件库

![img](https://i0.hdslb.com/bfs/note/5af721f903e20aac260069c3d53d48b060dac59f.png@494w_!web-note.webp)





第10课 元件的放置 P10 - 01:39



1.左下角放置命令

2右下角Panels---Components---选择自己的元件库---鼠标右键拖动到图纸上

![img](https://i0.hdslb.com/bfs/note/9cb693e05f8e7342dd52f06d6b32ed1da91b4c7a.png@610w_!web-note.webp)



第11课 器件的复制及对齐 P11 - 00:13

1.双击原理图纸的边缘，属性栏Sheet Size将图纸改大



2.绘制边框线：

![img](https://i0.hdslb.com/bfs/note/c774b8eacec5e99be5c2c22b295397c2f34f98d4.png@620w_!web-note.webp)

shift+空格可改变走线方式-直角、钝角、任意角



绘制图要注意均匀性





第12课 导线及NetLabel的添加 P12 - 00:11

1.连接导线（具有电气属性）



- 

![img](https://i0.hdslb.com/bfs/note/23eaa86970c1ddbc08394df29f9037d695c8f5bd.png@454w_!web-note.webp)

-  Ctrl+W

绘制元件库的线无电气属性，注意区分



绘制过头，Backspace键可退回



2.放置端口



![img](https://i0.hdslb.com/bfs/note/a2f7ddacfb150d46c8a4d3be0b550cb703fa99bc.png@620w_!web-note.webp)



3.元件绘制有误时可更改后更新

![img](https://i0.hdslb.com/bfs/note/afa8b7244cadcbef0393daaca1b88696f62de0d7.png@620w_!web-note.webp)



4.放置NetLabell（网络标签）

![img](https://i0.hdslb.com/bfs/note/8f02e88a039adc6c3441cae148b2b8976d64c751.png@620w_!web-note.webp)





第13课 Value值的核对 P13 - 00:43



1.器件位号：①按照原始原理图改

​	                 ②快捷键T---A---A，进入位号编辑器

![img](https://i0.hdslb.com/bfs/note/c8554ee77aa60f67a1dd04b2b9e08adcf9b6d15e.png@610w_!web-note.webp)

左上角定义处理顺序

![img](https://i0.hdslb.com/bfs/note/ddeb52f6e373ba7ac5e9499a1e2bdcf1b31947ed.png@606w_!web-note.webp)

勾选要处理的原理图

![img](https://i0.hdslb.com/bfs/note/68e43263e5bc0ed7fdb51be64decaee49b78751d.png@610w_!web-note.webp)

可以先复位，然后更新列表

![img](https://i0.hdslb.com/bfs/note/c9e6c448d70146f8efe4e29809e7d9d1d53e1193.png@620w_!web-note.webp)

更新前记得打钩

![img](https://i0.hdslb.com/bfs/note/a28b452680572d433fab105cebd03723c2724b96.png@312w_!web-note.webp)

右下角：接受更改---执行变更



2.更改位号的同时检查连接和极性器件的极性





第14课 封装的统一管理 P14 - 00:13



1.PCB封装（PCB封装是电子设计图和实物之间的映射，具有精确的数据要求）

​	①一个一个的添加

​	②

![img](https://i0.hdslb.com/bfs/note/b0d31b54312d39d4b08faf6158e05a764fd5f5c3.png@354w_!web-note.webp)

Current Footprint：当前使用封装



更改封装：选中要更改的元件---编辑---更改名称---右下角接受变化---执行变更

![img](https://i0.hdslb.com/bfs/note/0912c30ffbff10e47e08ac0e6035c0e0e610e4a9.png@620w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/071cea1e77262efb51611a97f160abfe6f14be9f.png@620w_!web-note.webp)

​	③对照BOM表变更：根据位号变更、根据容值变更





第15课 原理图的编译设置及检查 P15 - 00:21



1.肉眼检查：根据经验检查电路是否有误

2.

![img](https://i0.hdslb.com/bfs/note/551064b724371e279e0057b9b93897a5e77a6016.png@620w_!web-note.webp)

或

![img](https://i0.hdslb.com/bfs/note/e90efbd6e6c37d98797871607e81c7f306f3bb37.png@620w_!web-note.webp)

Error Reporting：报告错误

常见问题：

- 器件位号重复（Duplicate Part Designators）

![img](https://i0.hdslb.com/bfs/note/79de43641a3596422e78791afe9b3e96cd3450c4.png@620w_!web-note.webp)

编译---Messages

![img](https://i0.hdslb.com/bfs/note/e012ab2b1c177353a45fcdff7024d680daaa50ab.png@620w_!web-note.webp)

双击标红的错误 查看错因



- 网络悬浮（Floating power objects和Floating net labels）

​	网络标号的左下角是连接点



- 单端网络（Nets with only one pin）

 		单端网络不一定有错

​		确认不与其他管脚连接可加上通用标号

![img](https://i0.hdslb.com/bfs/note/d28477734a3bc0ce1a351b3e79b09144306cfb5f.png@610w_!web-note.webp)





第16课 常见CHIP封装的创建 P16 - 02:28

1.电阻容、SOT（小外形晶体管）、二极管



2.封装：PCB焊盘焊接器件的管脚、管脚序号、丝印（表示封装实物本体的范围）、阻焊、一脚标识（表示器件的正反方向）

3.打开PCB---放置焊盘

![img](https://i0.hdslb.com/bfs/note/b6b6b218d3b16a94dfce09bc40f3d830b85ebe52.png@610w_!web-note.webp)

1是通孔焊盘（Muti-Layer） 2是表贴焊盘（Top-Layer）

![img](https://i0.hdslb.com/bfs/note/b252b30df581e38db00be2f1d586e5b514451e5c.png@610w_!web-note.webp)

紫色区域称为阻焊：防止绿油覆盖

（Ctrl+D调出面板，然后也可以选3D）



复制焊盘---把两个焊盘重叠---选中---按M

![img](https://i0.hdslb.com/bfs/note/e12d71c42e47fbbd5c3fc614ebff7fb49c0d49ff.png@610w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/bfc15722745cb503b78a8df5cd47ff1d8e5a1326.png@610w_!web-note.webp)

边缘到边缘的距离要稍小于器件两引脚距离

![img](https://i0.hdslb.com/bfs/note/28395d7c30ad578d537e861122d53aced18f282e.png@610w_!web-note.webp)

Shift+C 去掉测量标注



Ctrl+C ---点击中心点---复制---按X镜像---依据数据手册框出丝印区域



用填充标识负极

![img](https://i0.hdslb.com/bfs/note/3e58e54d5850c8544ad134c85cd6982ec0f42c65.png@586w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/f20903f61363432947911653cf8d2a92fd25669c.png@610w_!web-note.webp)

放置焊盘时默认有阻焊



更改管脚号

![img](https://i0.hdslb.com/bfs/note/9739fb34e72f143129d969f6b866e8986cc2f0fc.png@610w_!web-note.webp)





第17课 常见IC类封装的创建 P17 - 00:22

1.利用上节课的方法



2.利用特殊粘贴

​	选中焊盘---复制---点击焊盘中心点

![img](https://i0.hdslb.com/bfs/note/9b1402565f667430508ce710d8db1af30dae3557.png@610w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/b6ca462e90cac7149d494b0e81214401c185aac7.png@610w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/7854752bd91e16b92be0816ce62811fe0f519b9a.png@610w_!web-note.webp)

点击焊盘中心点---删掉第一个重复的焊盘 

复制好焊盘后按E-F-C，快速把原点定位到中心点画丝印 SHift+E 绘制丝印边框、



加一脚标识：在一脚边绘制圆或利用通孔在丝印边框加半圆

![img](https://i0.hdslb.com/bfs/note/52dd0c2d0928637ca1895699167f414c0e5d5489.png@610w_!web-note.webp)



最后核查数据



丝印遮挡焊盘可以用裁剪导线删掉遮盖的部分

![img](https://i0.hdslb.com/bfs/note/3ad0d70c0089d69fc1e21a1a115f4f8b64e2c620.png@610w_!web-note.webp)





第18课 利用IPC封装创建向导快速... P18 - 00:44



1.安装插件

![img](https://i0.hdslb.com/bfs/note/b0c1f0a9bcd58a03581ada039658ba2b6d116e75.png@610w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/b81461fc7096a29cae9cf95237c8d11ce60c518f.png@610w_!web-note.webp)

在工具里有创建向导

![img](https://i0.hdslb.com/bfs/note/d4ed85cb5398f787876a9f060a7968420580f81e.png@610w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/1c3956dd0b6a796f3ef4bddeaf2d038a9289602d.png@610w_!web-note.webp)

点击下一步---按照数据手册填好各种数据

右下 勾选模型 会出现一个逼真的3D模型

![img](https://i0.hdslb.com/bfs/note/137deb1423763dc33bc5d501430032a9039dbb2f.png@610w_!web-note.webp)

加散热焊盘：

![img](https://i0.hdslb.com/bfs/note/6e773428426e584fee268b067af8e4fcd956b097.png@610w_!web-note.webp)

三种标准：布线比较密的板子选C，密度小的选A，一般选B（中等密度）

![img](https://i0.hdslb.com/bfs/note/d1fd328bd2ddd1c74d8cb2a1da45b3959995d813.png@610w_!web-note.webp)



创建好后按Ctrl+D切换到3D视图



选择存放位置

![img](https://i0.hdslb.com/bfs/note/ad5ac0a75cd6b0fb85081231d3037457331524a7.png@610w_!web-note.webp)





第19课 常用PCB封装的直接调用 P19 - 00:25



1.调用已做过的

![img](https://i0.hdslb.com/bfs/note/6b94dd0e17aa52c86b490326613b66a2a274ba69.png@610w_!web-note.webp)

选中所有元器件---Ctrl+C---到自己的库里粘贴

![img](https://i0.hdslb.com/bfs/note/4254595a04b998aea946b0dd8184bad16c16cea1.png@610w_!web-note.webp)



复制单个器件：在已有的图中选中器件--复制--切换到自己的PCB---在列表界面粘贴



2.百度搜索：PCB超级库





第20课 3D模型的创建和导入 P20 - 00:17



放置已经存在的3D模型

![img](https://i0.hdslb.com/bfs/note/7fa1c17d900c969349957cdf48247d906433b1ab.png@610w_!web-note.webp)

3D元件体：没有已经建好的模型

按Tab键暂停 在右边出现菜单栏

①默认放置在机械一层 ②表示实体高度③Standoof Height：悬浮高度

![img](https://i0.hdslb.com/bfs/note/5c3bb4932fa831f7fa07d00b2e971cb02368ca07.png@610w_!web-note.webp)

按回车，绘制边框   Shift+空格切换绘制形状（直角、圆弧）

Shift+鼠标右键可旋转3D视图



绘制圆柱体：

![img](https://i0.hdslb.com/bfs/note/1dadb64b2b7dba7c055794b25f65bd391c3421a0.png@610w_!web-note.webp)

绘制球体：

![img](https://i0.hdslb.com/bfs/note/c71b8761f82ab5479546c6a7bd7cdc3e437b344d.png@610w_!web-note.webp)

可通过各种形状的组合进行元件3D模型的创建



- 通过第三方软件导入元件3D模型

放置---3D元件体---

![img](https://i0.hdslb.com/bfs/note/241aaac0e659092d18883695be183ab280cbbb76.png@610w_!web-note.webp)





第21课 导入常见报错解决办法（unknow ... P21 - 00:14



 导入网表

![img](https://i0.hdslb.com/bfs/note/bde81f5f2592bcfe83c0772d4c2e29c3c84365d4.png@620w_!web-note.webp)

如果在原理图界面，选择第一项Update



表示发现不一样的地方，询问是否继续比对，直接点击yes即可

![img](https://i0.hdslb.com/bfs/note/5c168226d2dd721b7c78ba18153635c2fa383cbe.png@620w_!web-note.webp)



勾选Add Component Classes---执行变更---仅显示错误---报告变更---导出问题的Excel表格---关闭



![img](https://i0.hdslb.com/bfs/note/7e1c6cde51d289315bc10bd109fe0df3c18b0717.png@460w_!web-note.webp)

错误类型：没有找到对应的封装

打开PCB库，确认是否有对应封装

![img](https://i0.hdslb.com/bfs/note/72ace5bb2730552b9d8839ab7b25c01ec19760cf.png@620w_!web-note.webp)

把自己的封装库加载到工程中

![img](https://i0.hdslb.com/bfs/note/6476da69f37bc07b5ec2cf9650600b3dd66c5d09.png@620w_!web-note.webp)



将需要的元件复制到原工程中，保存更改，再次导入，重新生成报错表



快速查找元件快捷键：J C



固定脚要在原理图上加管脚，并且接地

![img](https://i0.hdslb.com/bfs/note/b4a54cc85d33c7130aa0967177950532d41c704d.png@620w_!web-note.webp)



unknow pin原因：①没有封装 ②管脚缺失 ③管脚号不匹配，要一一对应





第22课 常见绿色报错的消除 .mp4 P22 - 00:14

在器件导入到PCB后 移动器件时会出现绿色报错，属于规则问题



按T-M可复位绿色报错

![img](https://i0.hdslb.com/bfs/note/6f11c424af90eb5a10cdd65efa7292c8adcbafaf.png@620w_!web-note.webp)



选择Rules To Check,然后右键单击批量关闭，把所有规则检查干掉

![img](https://i0.hdslb.com/bfs/note/beb5b79cc4cb8ac91bd0202aa32ad78e54a35c4c.png@760w_!web-note.webp)

只留下电气规则

![img](https://i0.hdslb.com/bfs/note/62bb59533d680d178e5761109c6772fa900ad282.png@760w_!web-note.webp)

短路标识：白色圆圈圈出来的部分，圈的右上角紧挨着一个短路的标识符

![img](https://i0.hdslb.com/bfs/note/229a640afbe68496c1b60ccf37709754458af0de.png@620w_!web-note.webp)



元件短路时先检查原理图是否有问题，重新导入，不行的话，完全新建一个再导入





第23课 PCB板框的评估及叠层设置 .mp4 P23 - 00:16



1.

![img](https://i0.hdslb.com/bfs/note/52fad2db1cfca3b05e41a89de94883c24adbe08a.png@620w_!web-note.webp)



干掉默认快捷键：

在空白处单击右键

![img](https://i0.hdslb.com/bfs/note/9cca23570528ce42d5f4096193cf281213ff881a.png@520w_!web-note.webp)

找到想要设置的快捷键的默认

![img](https://i0.hdslb.com/bfs/note/aafe1c76f03f188253c7340d9243c594ef5f662d.png@620w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/f9703cb41f186dc0d75c9ad698a7508446c0d2e5.png@620w_!web-note.webp)



在机械层绘制板框（比阵列排布器件的所需空间大一点）

![img](https://i0.hdslb.com/bfs/note/9427e2be4646fb2ff19867d1c61b4c64eb6ad32d.png@620w_!web-note.webp)



按E-O-S设置原点，按Q切换到毫米，调整板框大小，尽量调成规整的数

![img](https://i0.hdslb.com/bfs/note/092ca45978e42cd606ffffbc81decbb0dd679a6c.png@620w_!web-note.webp)

按P，点“尺寸”，标记板框大小     Tab键设置显示格式，抓取中心点，  按Shift+E可切换模式

空格切换方向

![img](https://i0.hdslb.com/bfs/note/93d93815e7a8f19a3932fe84d326011909666761.png@620w_!web-note.webp)



重新定义板框：将框线全部选中，执行快捷键D-S-D

![img](https://i0.hdslb.com/bfs/note/838a831a5da6955d9e86ddab8e0b0523e6c20763.png@620w_!web-note.webp)



固定孔的放置：框选-M-S 移动---先放到顶点---通过X,Y移动，一般选择5mm和5mm

![img](https://i0.hdslb.com/bfs/note/768b56f88799ddca99118dfa8ed70a8770071a43.png@620w_!web-note.webp)



线不见了解决方法：快捷键N---显示连接---全部



快捷键D-K 进入层叠管理器

①丝印层 ②阻焊层 ③信号层

![img](https://i0.hdslb.com/bfs/note/9ccbb8e5061074ccebc4f841af98aa3ac13c7d60.png@620w_!web-note.webp)

Signal：正片层   Plane：负片层  Core：芯板

Prepreg:PP片  surface Finish:表面处理

![img](https://i0.hdslb.com/bfs/note/e36d43ed026d874b48ff1423dd0f9a8bb22f7f45.png@620w_!web-note.webp)



添加两个负片层，点击名字可以重新命名



Shift+S 单层显示



正片层默认无铜，走线和铺铜的地方铜保留，不走线不铺铜的地方铜被清除；负片层相反





第24课 PCB快捷键的设置及推荐.mp4 P24 - 00:13

快捷键设置：鼠标放在命令上按Ctrl 点击---在可选的一栏输入想要设置的快捷键



![img](https://i0.hdslb.com/bfs/note/410090ddfbe50c6d5db593d865c5c2153b7ce0ed.png@620w_!web-note.webp)



![img](https://i0.hdslb.com/bfs/note/53baa1cd89b146ffcc6b65502a2b3c985a016dc2.png@620w_!web-note.webp)



快捷键：（灰色部分为系统设置）

![img](https://i0.hdslb.com/bfs/note/c4bc1bf49b510a619201e6cf009775e6ca37ed9d.png@738w_!web-note.webp)

 U--U--C 取消布线



右上角设置

![img](https://i0.hdslb.com/bfs/note/6d05a0e75d6a99151d9bb1b333a633f58feb5f0b.png@738w_!web-note.webp)





第25课 模块化布局规划.mp4 P25 - 00:17



工具--交叉选择模式

垂直分割

将各个模块单独框出来