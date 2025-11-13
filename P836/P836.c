#include <stdio.h>
#include <string.h>


char* first_letters(char *words[], int num_words, char *result) {
    int pos = 0;
    char letters[100];
    for (int i = 0; i < num_words; i++) {
        result[pos++] = words[i][0];
    }
    result[pos] = '\0';
    return result;
}

int main() {

    char *words[] = {
        "affine",
        "plane",
        "radically",
        "integral",
        "local",
        "field",
        "open",
        "orinted",
        "line",
        "selection",
        "jacobian",
        "orthogonal",
        "kernel",
        "embedding"};
    int num_words = sizeof(words) / sizeof(words[0]);
    char letters[100];

    printf("Result: %s\n", first_letters(words,num_words,letters));
}