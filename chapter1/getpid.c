#include "../apue.h"

int main(int argc, char *argv[])
{
  printf("hello world from process id %d\n", getpid());
  return 0;
}
