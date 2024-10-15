//To delete the comment line in the data of a given file.
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char line[256];
    int lineNumber = 1;
  fp = fopen("pranjal.c", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
 while (fgets(line, sizeof(line), fp) != NULL) {
        // Check for single-line comments
        if (strncmp(line, "//", 2) == 0) {
            printf("Comment removed at line %d\n", lineNumber);
        } else if (strncmp(line, "/*", 2) == 0) {
            // Check for multi-line comments
            while (fgets(line, sizeof(line), fp) != NULL) {
                printf("Comment removed at line %d\n", lineNumber);
                lineNumber++;
                if (strstr(line, "*/") != NULL) {
                    break;
                }
            }
        } else {
            printf("%d: %s", lineNumber, line);
        }
        lineNumber++;
    }

    fclose(fp);
    return 0;
}
