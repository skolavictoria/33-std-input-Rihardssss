#include <stdio.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

typedef struct {
    char word[MAX_LENGTH];
    int count;
} Word;

int compare_strings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return str1[i] == str2[i];
}

int find_word(Word words[], int word_count, const char* word) {
    for (int i = 0; i < word_count; i++) {
        if (compare_strings(words[i].word, word)) {
            return i;
        }
    }
    return -1;
}

void copy_string(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: No words to count.\n");
        return 1;
    }

    Word words[MAX_WORDS];
    int word_count = 0;

    for (int i = 1; i < argc; i++) {
        int index = find_word(words, word_count, argv[i]);
        if (index == -1) {
            copy_string(words[word_count].word, argv[i]);
            words[word_count].count = 1;
            word_count++;
        } else {
            words[index].count++;
        }
    }

    for (int i = 0; i < word_count; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}
