# STC8-AlibabaCloud
STC8A8KS4A64单片机通过EMW3080模组的MQTT-AT指令，连接阿里云平台。
###### 2020-04-13 
* 物模型：DS18B20温度，高温报警，低温报警
###### 2020-04-13
* 当前缺陷：~~缺少重新发送MQTTSEND命令机制，在MQTTSEND发送后无执行成功应答时，应当尝试重新发送，重新发送多次后若还无反应则日志记录后，放弃继续发送。并发送AT验证模组是否还在线，若无应答则视为模组已掉线，阻塞发送标识位，不再向模组串口发送任何信息；若有应答，则日志记录后立即重启MCU，尝试一同初始化模组。~~
* 重启MCU前的日志应当写入EEPROM中。
* 缺少~~服务调用~~和设置属性
###### 2020-04-15
* 在未连接WiFi模组的情况下也可以本地运行，WiFi模组多次不能应答AT 指令时能判断WiFi模组是否还连接中，还在则重启MCU尝试同步WiFI模组维持联网状态，若不在则自动切换为本地运行模式。
* 后续应该增加更多传感器
###### 2020-04-17
* 增加更改LCD1602显示内容的服务，参数[ isRow2, Text ]，Text字符串最多16个字符
* 物模型新增对应LCD1602显示内容服务
* IOT-Studio的移动端可视化开发入口封闭，重新上线时间未知，懵逼……
###### 2020-05-06
* 增加GY-25传感器，上传方位角（航向角、俯仰角、横滚角），校准服务
* 增加重启MCU和进入离线模式功能
* 修正部分运行逻辑错误
* 将IOT-Studio制作的的web应用用Fusion App整合生成App
###### 2020-05-06
* 新增LED控制部分，控制三个LED灯，并可以选择是否使用IAP—EEPROM记忆LED状态，保证掉电重启后LED状态不变。
###### 2020-05-16
* 上传安卓App安装包及演示图片，放置在Android App文件夹下