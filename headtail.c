#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* toss() {
    return rand() % 2 == 0 ? "head" : "tail";
}

void play() {
    printf("Tossing a coin...\n");
    int head_count = 0, tail_count = 0;
    for (int i = 1; i <= 3; i++) {
        const char* result = toss();
        printf("rd %d: %s\n", i, result);
        if (result == "head") head_count++;
        else tail_count++;
    }
    printf("head: %d, tail: %d\n", head_count, tail_count);
}

int main() {
    srand(time(0));
    play();
    return 0;
}
