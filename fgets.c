#include <stdio.h>

int main() {
  char my_array[10];
  puts("Enter you data");
  // Will automatically crop to 9 letters + \0
  // sizeof works in here because giving an array as argument returns the size
  // of the array, if it was a pointer, i would return the size of the pointer
  // addres
  fgets(my_array, sizeof(my_array), stdin);
  puts(my_array);

  return 0;
}