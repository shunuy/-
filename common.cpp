#include "stdafx.h"
#include "common.h"
int EquipmentType = TESTTYPE_ZHUJI;// ;//zhj add V1.01


/*V1.01 湘电提供的摩擦终版基础上修改
1、把原来摩擦和撞击两个软件，整合成一个软件
2、为适应800*600的屏幕，作了软件界面的修改
3、取消在d盘备份数据的功能
4、解决调试版与Plc通讯的问题
需要解决的问题：出现门控信号没找到，找不到原因 临时取消此功能
V1.03  20170301广西浦北
1、更改烟雾传感器放大倍数(plc程序已经对烟雾数据作了处理)
2、增加了通过mocha.ini判断是摩擦还是撞击的功能，只用编译一次可以同时应用到摩擦与撞击
3、声极计阈值改成显示1位小数，更改后需要重启软件才能生效
4、撞击安装程序中增加质量为5和10的项
不能设定零位的原因暂未找到
V1.04 
1、修改摩擦实时高度没有除以10的bug
2、在试验室运行时仍出现一次  与PLC写入失败！地址：D000000（写入零位出现错误）（不重复出现此问题）
V1.05 屏蔽与PLC写入失败！地址：D000000，写入操作记录
      缩小检测报告、报表窗口大小
	  解决以下问题：从桌面快捷方式启动，找不到报表文件。在文件夹下找文件没有问题
V1.06 
*/