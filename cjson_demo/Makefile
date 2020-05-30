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

%.o: %.c
	$(CC) $(INCLUEDS) $(CFLAGS) -c $< -o $@

.PHONY:clean
	@rm -rf $(OBJECT) output/
