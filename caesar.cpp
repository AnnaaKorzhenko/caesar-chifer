#include "caesar.h"

#include <iostream>

int search_index(char c) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0;
    while(alphabet[i] != c) {
        i++;
    }
    return i;
}

void encrypt(std::string text, int key) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0;
    int index;
    for (i = 0; i < text.length(); i++) {
        index = search_index(text[i]);
        text[i] = alphabet[index + key];
    }
}

void decrypt(std::string text, int key) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0;
    int index;
    for (i = 0; i < text.length(); i++) {
        index = search_index(text[i]);
        text[i] = alphabet[index - key];
    }
}