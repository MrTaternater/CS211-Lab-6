// Includes header details in header file
#include "Lab6.h"

int main(void)
{
	// Declare two input and output file pointers
	FILE* pInputFile = fopen("Encrypted_Poem.txt", "r");
	FILE* ownPoem = fopen("GetTheRightFile.txt", "r");
	FILE* decryptPoem = fopen("Decrypted_Poem.txt", "w");
	FILE* newEncryptPoem = fopen("New_Encrypted_Poem.txt", "w");
	
	// Determines if the text file contains contents
	if (ownPoem != NULL)
	{
		// Function call to decrypt poem per part 1
		DecryptPoem(pInputFile, decryptPoem);
		
		// Function call to encrypt poem per part 2
		EncryptPoem(ownPoem, newEncryptPoem);
		
	}
	else
	{
		// Print error message to the screen
		printf("File did not open\n");
		
	}
	
	// Return 0 to end main
	return 0;
}
