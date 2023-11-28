# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
# -g     - this flag adds debugging information to the executable file
# -Wall  - this flag is used to turn on most compiler warnings
CXXFLAGS = -g -Wall

.PHONY: app clean

app: day2

day2: day2.o
	$(CXX) $^ -o $@

day2.o: day2.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o day2
