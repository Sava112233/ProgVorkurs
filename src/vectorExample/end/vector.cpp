// file: src/vectorExample/end/vector.cpp
#include <iostream>
#include <vector>
#include <string>

int findMax(const std::vector<int> &vec)
{
  int max = vec[0];
  for (auto v : vec)
    if (v > max)
      max = v;
  return max;
}

int findMin(const std::vector<int> &vec)
{
  int min = vec[0];
  for (auto v : vec)
    if (v < min)
      min = v;
  return min;
}

double calcAverage(const std::vector<int> &vec)
{
  double sum = 0;
  for (auto v : vec)
    sum += v;
  return sum / vec.size();
}

void printVec(const std::vector<int> &vec)
{
  unsigned int idx = 0;
  for (auto v : vec)
  {
    std::cout << "vInt[" << idx << "]=" << v << std::endl;
    idx++;
  }
  std::cout << std::endl;
}

int main()
{
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

  /* determine minimum */
  int minVal = findMin(vInt);
  std::cout << "Minimum: " << minVal << std::endl;

  /* determine maximum */
  int maxVal = findMax(vInt);
  std::cout << "Maximum: " <<  maxVal << std::endl;

  /* calculate average value */
  float avg = calcAverage(vInt);
  std::cout << "Average value: " << avg << std::endl;

  return 0;
}