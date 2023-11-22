# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
# -g     - this flag adds debugging information to the executable file
# -Wall  - this flag is used to turn on most compiler warnings
CXXFLAGS = -g -Wall

.PHONY: app clean

app: day1

day1: day1.o
	$(CXX) $^ -o $@

day1.o: day1.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o day1
