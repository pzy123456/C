VERSION = 1.0.0
SOURCE  = $(wildcard ./src/*.c)
OBJECT  = $(patsubst %.c, %.o, $(SOURCE))

INCLUEDS = -I ./inc

TARGET = pzy
CC     = gcc
CFLAGS = -Wall -g

$(TARGET): $(OBJECT)
	@mkdir -p output/
	$(CC) $^ $(CFLAGS) -o output/$(TARGET)_$(VERSION)
#gcc 所有.o文件 -Wall -g -o output/pzy_1.0 这句话说所有的文件编译生成的可执行文件存到这里

%.o: %.c
	$(CC) $(INCLUEDS) $(CFLAGS) -c $< -o $@
#sub.o: sub.c
#gcc -I ./inc (去这个目录找头文件) -Wall -g -o 对应.c -o ，对应.o


.PHONY:clean
clean:
	@rm -rf $(OBJECT) output/