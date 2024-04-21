/*Reverse file content Task-1 Day-38*/
#include <stdio.h>
int main(int argc, char *argv[]) 
{
  // Check for correct arguments
  if (argc != 3) 
  {
    printf("Usage: %s <input_file> <output_file>\n", argv[0]);
    return 1;
  }

  // Open files
  FILE *inputFile = fopen(argv[1], "r");
  if (inputFile == NULL)
  {
    printf("Error opening input file: %s\n", argv[1]);
    return 1;
  }
  FILE *outputFile = fopen(argv[2], "w");
  if (outputFile == NULL) 
  {
    printf("Error opening output file: %s\n", argv[2]);
    fclose(inputFile);
    return 1;
  }

  // Get file size (optional for efficiency)
  fseek(inputFile, 0L, SEEK_END);
  long fileSize = ftell(inputFile);
  fseek(inputFile, 0L, SEEK_SET);
  long i;
  // Reverse and write character by character
  for (i = fileSize - 1; i >= 0; i--) 
  {
    fseek(inputFile, i, SEEK_SET);
    char ch = fgetc(inputFile);
    fputc(ch, outputFile);
  }

  // Close files
  fclose(inputFile);
  fclose(outputFile);

  printf("File content reversed successfully.\n");
  return 0;
}

