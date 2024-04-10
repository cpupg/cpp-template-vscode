#include <stdio.h>

int main() {
  printf("hello world");
  printf("current exe: dir\\root.c -> bin\\dir\\root.exe");
  int a = 1, b = 2;
  printf("a:%d,b:%d\n",a,b);
  int c = a + b;
  printf("c:%d\n", c);
  printf("如果这段是乱码，你需要设置编码");
  return 0;
}