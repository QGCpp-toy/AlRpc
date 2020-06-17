# AlRpc
目前初步方案：
1. 通过proto文件以及模板文件，通过命令行的方式生成代码Client端的服务发现文件以及Server端的基础代码。
2. 在handler中编写rpc逻辑文件(可以增加redis_util、mysql_util等文件夹来进行数据库逻辑的编写)
3. 在Server端中，通过Cmd(string)与handler(stl::function)的对应来进行服务发现
4. 在Client端，通过一开始生成的服务发现文件来调用Rpc。

序列化使用Protobuf进行序列化与反序列化。
