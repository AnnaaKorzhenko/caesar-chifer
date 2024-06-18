#ifndef CAESAR_H
#define CAESAR_H

#ifdef _WIN32
extern "C" {
    __declspec(dllexport) void encrypt(const char* input, char* output, int key);
    __declspec(dllexport) void decrypt(const char* input, char* output, int key);
    __declspec(dllexport) void search_index(char input, int output);
}
#else
extern "C" {
    void encrypt(char* input, int key);
    void decrypt(char* input, int key);
    int search_index(char input);
}
#endif

#endif
