CC = g++

TARGET = app
INCLUDE = src
SUB_DIR = src src/koios

CFLAGS = -std=c++17 -Wall -I $(INCLUDE)

all: $(TARGET)

$(TARGET): $(wildcard *.cpp $(foreach fd, ${SUB_DIR}, $(fd)/*.cpp)) $(wildcard *.hpp $(foreach fd, ${SUB_DIR}, $(fd)/*.hpp))
	$(CC) $(CFLAGS) -o $(TARGET) $(wildcard *.cpp $(foreach fd, ${SUB_DIR}, $(fd)/*.cpp))

clean:
	$(RM) $(TARGET)
	echo $(wildcard *.cpp $(foreach fd, ${SUB_DIR}, $(fd)/*.cpp)) $(wildcard *.hpp $(foreach fd, ${SUB_DIR}, $(fd)/*.hpp))