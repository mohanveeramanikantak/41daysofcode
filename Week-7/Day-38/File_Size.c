/*File Size Task-1 Day-38*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    char filename[100];
    long int size;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "rb");
    if (fp == NULL) 
	{
        printf("Error opening file\n");
        return 1;
    }
    fseek(fp, 0, SEEK_END);  // Move to the end of the file
    size = ftell(fp);          // Get the current position (file size)
    fclose(fp);
    if (size == -1)
	{
        printf("Error getting file size\n");
        return 1;
    }
    printf("File size: %ld bytes\n", size);
    return 0;
}

