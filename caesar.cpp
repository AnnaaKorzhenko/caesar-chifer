#include "caesar.h"

int search_index(char c) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0;
    while(alphabet[i] != c && i < 26) {
        i++;
    }
    return i;
}

void encrypt(char* text, int key) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        int index = search_index(text[i]);
        if (index < 26) {
            text[index] = alphabet[(index + key) % 26];
        }
    }
    text[i] = '\0';
}

void decrypt(char* text, int key) {
    const char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        int index = search_index(text[i]);
        if (index < 26) {
            text[i] = alphabet[(index - key + 26) % 26];
        }
    }
    text[i] = '\0';
}