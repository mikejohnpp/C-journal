#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char *file_path = "hello_text.txt";
FILE *fp;

void get_print_error() {
  int errorrr = errno;
  printf("%s\n", strerror(errorrr));
}

bool open_file() {
  fp = fopen(file_path, "r");
  if (fp == NULL) {
    get_print_error();
    return false;
  }
  return true;
}

// int main(void) {
//
//     char s[1024];
//     int linecount = 0;
//     while(fgets(s, sizeof(s), fp) != NULL) {
//         printf("%d: %s", ++linecount, s);
//     }
//
//     fclose(fp);
//     return 0;
// }

int main(void) {
  if (open_file() == false) {
    return -1;
  }
  main();
  int linecount = 0;
}
