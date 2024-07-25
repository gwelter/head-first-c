#include <stdio.h>

int main() {
  // Won't work because 'JQK' ins a string constant, so it goes to the constant
  // memory space which is read-only If we try to modify this variable we'll get
  // different erros on different machines char *cards = "JQK"; To better
  // prevent this or at least have the propper error when compyling (and not on
  // runtime) we use the 'const' keyword const char *cards = "JQK";
  // The propper
  // way is to specify the string as an array so the string literal 'JQK' is
  // copied, yes copied, to the array so we can modify it
  char cards[] = "JQK";
  char a_card = cards[2];
  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = a_card;
  puts(cards);

  return 0;
}