
# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
# -g     - this flag adds debugging information to the executable file
# -Wall  - this flag is used to turn on most compiler warnings
CXXFLAGS = -g -Wall

.PHONY: app clean

app: stack

stack: stack.o
	$(CXX) $^ -o $@

stack.o: stack.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o stack

