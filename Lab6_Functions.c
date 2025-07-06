// Includes header details in header file
#include "Lab6.h"

//-----------------------------------------------------------------------------
// Function Name: DecryptPoem
// Description: Takes an encrypted input file and decrypts each line it
// contains. Each character is printed to an output file.
//
//-----------------------------------------------------------------------------
void DecryptPoem(FILE *pInputFile, FILE *decryptPoem)
{
	// Creates variable for the current line of the poem
	char currentLine[100];
	
	// While loop continues until the end of the input file
	while(fgets(currentLine, sizeof(currentLine), pInputFile) != NULL)
	{
		// Continues going through the line of text until there is nothing more
		for(int counter = 0; currentLine[counter] != '\0'; counter++)
		{
			// Ignores all enter keys
			if(currentLine[counter] != '\n')
			{
				// Decrypts each character
				currentLine[counter] = currentLine[counter] - 25;
			}
		
			// Checks for lowercase letter
			if(currentLine[counter] >= 'a' && currentLine[counter] <= 'z')
			{
				// Converts letter to uppercase
				currentLine[counter] = currentLine[counter] - 32;
			}
		}
		
		// Prints letter to output file
		fprintf(decryptPoem, "%s", currentLine);
	}

}

//-----------------------------------------------------------------------------
// Function Name: EncyptPoem
// Description: Takes a standard input file and encrypts each line it
// contains. Each character is printed to an output file.
//
//-----------------------------------------------------------------------------
void EncryptPoem(FILE *ownPoem, FILE *newEncryptPoem)
{
	// Creates variable for the current line of the poem
	char currentLine[100];
	
	// While loop continues until the end of the input file
	while(fgets(currentLine, sizeof(currentLine), ownPoem) != NULL)
	{
		// Continues going through the line of text until there is nothing more
		for(int counter = 0; currentLine[counter] != '\0'; counter++)
		{
			// Ignores all enter keys
			if(currentLine[counter] != '\n')
			{
				// Encrypts each character
				currentLine[counter] = currentLine[counter] + 16;
			}
		}
		
		// Prints letter to output file
		fprintf(newEncryptPoem, "%s", currentLine);
	}

}
