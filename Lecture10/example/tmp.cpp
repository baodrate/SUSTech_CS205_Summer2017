 
#include <iostream>

using namespace std;

void fun(int &x, int y, int *z) {
   x = 20;
   y = 5;
   *z = 5;
}

int main() {
  int x = 10;
  int y = 10;
  int z = 10;
  fun(x, y, &z);
  x += (y + z);
  cout << "New value of x is " << x << endl;
  return 0;
}