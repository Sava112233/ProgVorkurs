// file: src/strings/end/strings.cpp
#include <iostream>
#include <string>

int main(void)
{
  // construct string object with 5 character
  std::string hi(5,' ');
  hi[0] = 'H';
  hi[1] = 'e';
  hi[2] = 'l';
  hi[3] = 'l';
  hi[4] = 'o';
  // construct string object and initialize with string literal
  std::string everybody = "world!";
  // construct empty string object
  std::string greeting;
  greeting = hi;
  // construct string object carrying the input
  std::string name;
  std::cout << "What's your name?\n";
  std::cin >> name;
  // concatenate strings and character
  greeting = greeting + ' ' + name;

  std::cout << hi << std::endl;
  std::cout << everybody << std::endl;
  std::cout << greeting << std::endl;

  return EXIT_SUCCESS;
}