#include <stdio.h>

/* Skips the first 6 letters of a string */
void skip(char *msg) { puts(msg + 6); }

int main() {
  int drinks[] = {1, 2, 3, 4};

  puts("Since arrays starts at index 0, the pointer to an array is also the "
       "first item on the list\n");
  printf("First item on the list: %d\n", drinks[0]);
  printf("First item on the list: %d\n", *drinks);

  puts("\nThat means the third item is by moving two positions on the array");
  puts("(This works with pointer arithmetics)\n");
  printf("Third item on the list: %d\n", drinks[2]);
  printf("Third item on the list: %d\n", *(drinks + 2));
  printf("Third item on the list: %d\n", 2 [drinks]);

  char *msg_from_amy = "Don't call me";
  skip(msg_from_amy);

  return 0;
}