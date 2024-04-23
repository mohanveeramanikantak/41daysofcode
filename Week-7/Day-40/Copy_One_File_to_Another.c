/*Copy one file to another Task-1 Day-40*/
#include <stdio.h>
int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 3) {
        printf("Usage: %s <D:\Challenges\41-Days C Challenges\Week-7\Day-40\bus_ticket.c> <D:\Challenges\41-Days C Challenges\Week-7\Day-40\Copy_One_File_to_Another.c>\n", argv[0]);
        return 1;
    }

    // Open source file in read mode
    FILE *source_file = fopen(argv[1], "rb");
    if (source_file == NULL) {
        printf("Error opening source file: %s\n", argv[1]);
        return 1;
    }

    // Open destination file in write mode (creates if not existing)
    FILE *destination_file = fopen(argv[2], "wb");
    if (destination_file == NULL) {
        printf("Error opening destination file: %s\n", argv[2]);
        fclose(source_file);  // Close source file even on error
        return 1;
    }

    // Read and write characters one by one (efficient for small to medium files)
    char ch;
    while ((ch = fgetc(source_file)) != EOF) {
        if (fputc(ch, destination_file) == EOF) {
            printf("Error writing to destination file\n");
            fclose(source_file);
            fclose(destination_file);
            return 1;
        }
    }

    // Close both files
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully!\n");
    return 0;
}

