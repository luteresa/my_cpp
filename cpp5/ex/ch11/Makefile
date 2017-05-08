##################################################
###编译当前目录下所有.cpp文件为相对应可执行文件
##################################################
CXX = g++
	
src = $(wildcard *.cpp)
target = $(patsubst %.cpp, %.out, $(src))
%.out:%.cpp
	$(CXX)  $^  -o $@  -std=c++11

all:$(target)

clean:
	rm -r $(target)
