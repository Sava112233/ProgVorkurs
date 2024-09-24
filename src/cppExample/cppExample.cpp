// file: src/cppExample/cppExample.cpp
#include <iostream>

double calcVolume(double r, double h) {
  const double PI = 3.141592;
  return r * r * PI * h;
}

int main() {
  
  double r=0.0, h=0.0, v=0.0;
  std::cout << "Calculate cylinder volume\n";
  std::cout << "Input of radius: ";
  std::cin >> r;
  if(std::cin.fail()) {
    std::cerr << "Error input of radius!\n";
    return 1;
  }
  std::cout << "Input of height: ";
  std::cin >> h;
  if(std::cin.fail()) {
    std::cerr << "Error input of height!\n";
    return 1;
  }
  v = calcVolume(r, h);
  std::cout << "Volume " << v << std::endl;
  return 0;
}
