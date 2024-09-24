// file: src/vectorExample/start/vector.cpp
#include <iostream>
#include <vector>
#include <string>

void printVec(const std::vector<int>& vec) {
  unsigned int idx = 0;
  for (auto v : vec)
  {
    std::cout << "vInt[" << idx << "]=" << v <<std::endl;
    idx++;
  }
  std::cout << std::endl;
}

int main() {
  // construct vector of int objects
  std::vector<int> vInt; 

  // add elements to the vector
  int val = 0;
  unsigned num = 6;
  std::cout << "Input of elements:\n";
  for (unsigned int i = 0; i < num; i++)
  {
    std::cin >> val;
    vInt.push_back(val);
  }
  // print individual elements using range-based for loop
  printVec(vInt);
  return 0;
}