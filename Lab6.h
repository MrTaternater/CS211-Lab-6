#ifndef LAB6_H
#define LAB6_H

// Include for proper Visual Studio function
#define _CRT_SECURE_NO_WARNINGS

// Include for printing to the screen
#include <stdio.h>

// Include to use various string functions
#include <string.h>

// Prototypes for functions listed below
void DecryptPoem(FILE *pInputFile, FILE* decryptPoem);
void EncryptPoem(FILE *ownPoem, FILE *newEncryptPoem);

#endif
