#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store book information
struct book {
  int id;
  char title[50];
  char author[50];
  int issued;
  int i;
};

void addBook(struct book** library, int* count) 
{
  // Increase the library size by 1
  (*library) = (struct book*)realloc(*library, (*count + 1) * sizeof(struct book));

  // Get book details from user
  printf("Enter book ID: ");
  scanf("%d", (*library)[*count].id);
  printf("Enter book title: ");
  scanf(" %[^\n]", (*library)[*count].title); // Read entire line
  printf("Enter book author: ");
  scanf(" %[^\n]", (*library)[*count].author);
  (*library)[*count].issued = 0; // Mark book as not issued

  (*count)++; // Update book count
  printf("Book added successfully!\n");
}

void viewBooks(struct book* library, int count) 
{
  int i;	
  if (count == 0)
  {
    printf("No books in the library!\n");
    return;
  }

  printf("\n** List of Books **\n\n");
  printf("| ID | Title               | Author           | Issued |\n");
  printf("|---|----------------------|-------------------|--------|\n");
  
  for  (i = 0; i < count; i++) 
  {
    printf("| %d | %20s | %-0s | %d      |\n", library[i].id, library[i].title, library[i].author, library[i].issued);
  }
}

void issueBook(struct book* library, int count) 
{
  int id, found = 0;
  int i;
  printf("Enter book ID to issue: ");
  scanf("%d", &id);

  for (i = 0; i < count; i++) {
    if (library[i].id == id && library[i].issued == 0) {
      library[i].issued = 1;
      found = 1;
      printf("Book issued successfully!\n");
      break;
    }
  }

  if (!found) {
    printf("Book not found or already issued!\n");
  }
}

void returnBook(struct book* library, int count) 
{
  int id, found = 0;
  int i;
  printf("Enter book ID to return: ");
  scanf("%d", &id);

  for (i = 0; i < count; i++) 
  {
    if (library[i].id == id && library[i].issued == 1) 
	{
      library[i].issued = 0;
      found = 1;
      printf("Book returned successfully!\n");
      break;
    }
  }

  if (!found) {
    printf("Book not found or already returned!\n");
  }
}

int main()
 {
  struct book* library = NULL;
  int count = 0;
  int choice;

  while (1) 
  {
    printf("\n** Library Management System **\n\n");
    printf("1. Add Book\n");
    printf("2. View Books\n");
    printf("3. Issue Book\n");
    printf("4. Return Book\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addBook(&library, &count);
        break;
      case 2:
        viewBooks(library, count);
        break;
      case 3:
        issueBook(library, count);
        break;
      case 4:
        returnBook(library, count);
        break;
      case 5:
        printf("Exiting...\n");
        // Free allocated memory for books
        if (library != NULL) {
          free(library);
        }
        return 0;
      default:
        printf("Invalid choice!\n");
    }
  }

  return 0;
}

