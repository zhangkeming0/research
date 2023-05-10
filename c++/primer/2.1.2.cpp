#include <iostream>

// 2.2.1
std::string global_string; // outside is default initialized
int global_int;
//int is = {3.14}; // int i = 3.14;

int i = 0, &r1 = i;
double d = 0, &r2 = d;
int main()
{
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;

  int local_int;
  std::string local_string; // inside is unknown

  r2 = 3.14;
  r2 = r1;//type error
  i = r2;
  r1 = d;//type error
}