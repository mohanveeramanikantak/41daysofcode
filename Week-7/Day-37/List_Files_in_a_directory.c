/*List files in a directory Task-1 Day-37*/
#include <stdio.h>
#include <dirent.h>
int main() {
  DIR *dir;
  struct dirent *entry;
  char path[100] = "."; // Current directory by default

  dir = opendir(path);
  if (dir == NULL) {
    perror("opendir");
    return 1;
  }

  printf("Listing files in directory:\n");

  while ((entry = readdir(dir)) != NULL) {
    printf("%s\n", entry->d_name);
  }

  closedir(dir);
  return 0;
}

