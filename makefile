CXX:= g++
CXXFLAGS:= -std=c++17 -Wall -Iinclude

SRCS:= $(wildcard src/*.cpp) main.cpp
OBJS:= $(SRCS:.cpp=.o)
TARGET:=app.exe

.PHONY: all run clean
all: $(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS)