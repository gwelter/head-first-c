#include <stdio.h>
#include <string.h>

void input(char *string, int length);

int main() {
  char text[80];
  char tracks[][80] = {
      "I left my heart in Harvard Med School",
      "Newark, Newark - a wonderful town",
      "Dancing with a Dork",
      "From here to maternity",
      "The girl from Iwo Jima",
  };
  int totalTracks = sizeof(tracks) / sizeof(*tracks);
  printf("Search you favorite song amongs our %d songs: ", totalTracks);
  input(text, sizeof(text));

  for (size_t i = 0; i < totalTracks; i++) {
    if (strstr(tracks[i], text)) {
      printf("We found your song: %s\n", tracks[i]);
      break;
    }
  }
  return 0;
}

void input(char *string, int length) {
  int x;

  fgets(string, length, stdin);
  for (x = 0; x <= length; x++) {
    if (string[x] == '\n' || string[x] == '\r') {
      string[x] = '\0';
      break;
    }
  }
}