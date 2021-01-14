#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("I am the parent!\n");
  if (fork() == 0) {
    printf("I am the child!\n");
  } else {
    printf("I am still parent!\n");
  }
}
