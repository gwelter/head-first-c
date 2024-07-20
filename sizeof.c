#include <stdio.h>

/**
 *
Pointer decay
 Because array variables are slightly
different from pointer variables, you need
to be careful when you assign arrays
to pointers. If you assign an array to a
pointer variable, then the pointer variable
will only contain the address of the array.
The pointer doesn’t know anything about
the size of the array, so a little information
has been lost. That loss of information is
called decay.
 Every time you pass an array to a
function, you’ll decay to a pointer, so
it’s unavoidable. But you need to keep
track of where arrays decay in your code
because it can cause very subtle bugs.
 */

void fortune_cookie(char msg[]) {
  printf("Message reads: %s\n", msg);
  printf("Message occupies %lu bytes\n", sizeof(msg));
}

int main() {
  char quote[] = "Cookies make you fat";
  char s[] = "How big is it?";
  char *t = s;

  printf("sizeof s: %lu\n", (sizeof(s)));
  printf("sizeof &s: %lu\n", (sizeof(&s)));
  printf("sizeof t: %lu\n", (sizeof(t)));
  puts("");
  printf("&s == s: %d\n", &s == s);
  printf("&t == t: %d\n", &t == t);
  printf("&s == t: %d\n", &s == t);
  puts("");
  fortune_cookie(quote);

  return 0;
}