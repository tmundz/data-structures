// split from the " " I will get #-# letter: letters/strings

// split from the min = 1 max = 3
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

class Pass {
public:
  Pass(const std::string &file) {
    std::ifstream temp(file);
    std::string line;
    int32_t minVal, maxVal;
    char key;
    std::string value;
    while (getline(temp, line)) {
      std::istringstream iss(line);
      iss >> minVal;
      iss.ignore(1, '-');
      iss >> maxVal;
      iss >> key;
      iss.ignore(2, ':');
      iss >> value;
      int32_t matchCount = 0;
      for (auto &ch : value) {
        if (ch == key) {
          matchCount++;
        }
      }
      if (matchCount <= maxVal && matchCount >= minVal) {
        count++;
      }
    }
    temp.close();
    std::cout << count << std::endl;
  }

private:
  int32_t count = 0;
};
int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  }
  Pass pass(argv[1]);
}
