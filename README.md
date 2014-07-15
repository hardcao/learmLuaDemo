learmLuaDemo
============

记录从零开始学习lua的过程，希望的这个过程对别人有用。

mac 安装lua：
  第一步:用命令下载lua
      curl -R -O http://www.lua.org/ftp/lua-5.2.3.tar.gz
      tar zxf lua-5.2.3.tar.gz
      cd lua-5.2.3
      make macosx install
  第二步:用编写hello.lua文件进行测试
        1.文件内容是:print("hello");
        2.lua hello.lua

mac上lua和c++的简单交互:
    1 在hello.lua文件的文件夹中，编写hello.cpp
    2 用命令 g++ -llua hello.cpp -o holle
    3 运行./test就行了

添加了autotool生成makefile，实现流程
	autoscan
	mv configure.ascan configure.ac
	aclocal
	autoheader
	touch README NEWS AUTHORS ChangeLog
	autoconf
	automake --add-missing
	./configure
	make
	详情可以参考:http://shaoguangleo.blog.163.com/blog/static/22779832011116700660/和
	http://www.cnblogs.com/ychellboy/archive/2012/03/09/2387590.html
