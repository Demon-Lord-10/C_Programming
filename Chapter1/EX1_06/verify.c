#include <stdio.h>

int main() {
    printf("Press any key (then Enter), or Ctrl+D (EOF) to see the result:\n");

    printf("Result of expression: %d\n", getchar() != EOF);

    return 0;
}
