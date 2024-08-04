#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
  size_t len = strlen(s);
  // t points to the last character, +lengh -1 to ignore \0
  // since the compiler knows s is a char (4 bytes)
  // will move the pointer's "cursor" every 4 bytes
  char *t = s + len - 1;
  // pointers are number addresses so while t does not point at the beginning of
  // the array...
  while (t >= s) {
    printf("%c", *t); // prints t (initially the last character)
    t = t - 1;        // moves the pointer 4 bytes back (1 position)
  }
  puts("");
}

int main() {
  print_reverse("Guilherme");
  return 0;
}