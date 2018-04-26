CC = g++
CFLAGS = -g -Wall
SRCS = imread.cpp
TARGET = imread
OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(TARGET):$(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LIBS)

clean:
	rm imread *~
