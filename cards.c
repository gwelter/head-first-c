#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;

  do {
    puts("Enter the card_name");
    scanf("%2s", card_name);

    int val = 0;
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue;
    default:
      val = atoi(card_name);
    }

    if (val < 1 || val > 11) {
      puts("Invalid card, try between 1 and 10, K, Q, J or A. X to quit");
      continue;
    }

    if (val >= 3 && val <= 6) {
      count++;
    } else if (val >= 10) {
      count--;
    }
    printf("Current count %d\n", count);
  } while (card_name[0] != 'X');

  return 0;
}