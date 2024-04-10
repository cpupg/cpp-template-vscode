#include <iostream>
using namespace std;

int main()
{
  cout << "Hello world" << endl;
  cout << "current exe: dir\\root.cpp -> bin\\dir\\root.exe" << endl;
  int a = 1, b = 2;
  printf("a:%d,b:%d\n", a, b);
  int c = a + b;
  printf("c:%d\n", c);
  printf("如果这段是乱码，你需要设置编码");
  return 0;
}