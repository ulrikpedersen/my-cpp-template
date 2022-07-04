#include <iostream>
#include "sum.hpp"

using namespace std;

int main(int argc, const char **argv)
{
  cout << "Hello World!" << endl;
  int result = sum_int(1, 2);
  int plus_one_never_used = result + 1;
  cout << "1 + 2 = " << result << endl;
  return 0;
}
