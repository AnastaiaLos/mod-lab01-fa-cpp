// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
        unsigned int quantity = 0;
    bool meaning = false;
    bool item = false;
    for (int j = 0; str[j] != '\0'; j++) {
        if (!isspace(str[j])) {
            if (!meaning) {
                meaning = true;
                item = false;
            }
            if (isdigit(str[j])) {
                item = true;
            }
        } else {
            if (meaning) {
                if (!item) quantity++;
                meaning = false;
            }
        }
    }
    if (meaning && !item) quantity++;
    return quantity;
}
unsigned int faStr2(const char* str) {
    unsigned int quantity = 0;
    bool meaning = false;
    bool good = true;
    for (int k = 0; str[k] != '\0'; k++) {
        if (!isspace(str[k])) {
            if (!meaning) {
                meaning = true;
                good = isupper(str[k]); 
            } else {
                if (!islower(str[k])) {
                    good = false;
                }
            }
        } else {
            if (meaning) {
                if (good) quantity++;
                meaning = false;
            }
        }
    }
    if (meaning && good) quantity++;
    return quantity;
}
unsigned int faStr3(const char* str) {
    unsigned int allSUM = 0;
    unsigned int words = 0;
    unsigned int currentLen = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            currentLen++;
        } else {
            if (currentLen > 0) {
                allSUM += currentLen;
                words++;
                currentLen = 0;
            }
        }
    }
    if (currentLen > 0) {
        allSUM += currentLen;
        words++;
    }
    if (words == 0) return 0;
    double avg = static_cast<double>(allSUM) / words;
    return static_cast<unsigned int>(avg + 0.5);
}
