/*File Handling Task-1 Day-36*/
#include <stdio.h>
int main() 
{
    // File pointer variable
    FILE *fptr;
    // Open a file named "data.txt" in write mode ("w")
    fptr = fopen("data.txt", "w");
    // Check if the file was opened successfully
    if (fptr == NULL) 
	{
        printf("Error! Could not open the file.\n");
        return 1;
    }
    // Data to write to the file
    char data[] = "This is some data to write to the file.\n";
    // Write the data to the file using fputs()
    int result = fputs(data, fptr);
    // Check if writing was successful
    if (result == EOF)
	{
        printf("Error! Writing to the file failed.\n");
        fclose(fptr);  // Close the file even on error
        return 1;
    }
    printf("Data written successfully to data.txt\n");
    // Close the file
    fclose(fptr);
    return 0;
}

