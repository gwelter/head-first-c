#include <stdio.h>

int main() {
  float latitude;
  float longitude;
  char info[80];
  int started = 0; // false

  puts("{\"data\":["); // fist line of json
  while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
    if (latitude < -90 || latitude > 90) {
      fprintf(stderr, "Invalid latitude: %f. Skipping line\n", latitude);
      continue;
    }
    if (longitude < -180 || longitude > 180) {
      fprintf(stderr, "Invalid longitude: %f. Skipping line\n", longitude);
      continue;
    }
    if (started) {
      printf(",\n");
    } else {
      started = 1;
    }
    printf("{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude,
           longitude, info);
  }
  puts("\n]}"); // last line of json

  return 0;
}