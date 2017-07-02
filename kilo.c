#include <unistd.h>

int main() {
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1);
  return 0;
}
