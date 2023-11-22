#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Cals {
private:
  vector<int> cal;

public:
  Cals(const string &file) {
    char *line = nullptr;
    FILE *input = fopen(file.c_str(), "r");
    size_t len = 0;
    if (input == nullptr) {
      cerr << "Error opening file: " << file << endl;
      exit(EXIT_FAILURE);
    }
    int temp = 0;
    int count = 0;
    while (getline(&line, &len, input) != -1) {
      string str_line = line;
      if (!str_line.empty()) {
        istringstream iss(line);
        int num;
        if (iss >> num) {
          temp += num;
        } else {
          cal.push_back(temp);
          temp = 0;
        }
        count++;
      }
    }
    cal.push_back(temp);
    free(line);
    fclose(input);
  }

  void print() const {
    for (int num : cal) {
      cout << num << " ";
    }
    cout << endl;
  }
  int find_max_cal() {
    int max = 0;
    for (int num : cal) {
      if (max < num) {
        max = num;
      }
    }
    return max;
  }

  int find_top_3() {
    sort(cal.begin(), cal.end(), greater<int>());
    cout << "index 1 = " << cal[0] << endl;
    cout << "index 2 = " << cal[1] << endl;
    cout << "index 3 = " << cal[2] << endl;
    int total = (cal[0] + cal[1] + cal[2]);
    return total;
  }
};

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    std::cout << "Argument " << i << ": " << argv[i] << endl;
  }
  Cals cal(argv[1]);
  cal.print();

  cout << "max" << cal.find_max_cal() << endl;
  cout << "max" << cal.find_top_3() << endl;
}
