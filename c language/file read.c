 /*#include <stdio.h>
 int main() {
 // Open the file for appending
 FILE *file = fopen("notes.txt", "a");
 // Append text to the file
 fprintf(file, "\nWelcome to C programming!");
 // Close the file after appending
 fclose(file);
 // Reopen the file for reading
 file = fopen("notes.txt", "r");
 // Display the content of the file
 printf("Updated content of notes.txt:\n");
 char ch;
 while ((ch = fgetc(file)) != EOF) {
 putchar(ch);
 }
// Close the file
 fclose(file);
 return 0;
 }*/
  #include <stdio.h>
 /*int main() {
 FILE *file;
 // Create and write to the file
 file = fopen("example.txt", "w");
 fprintf(file, "This is a sample content.");
 fclose(file);
 printf("File created and content written successfully.\n");
 // Read and display the file content
 file = fopen("example.txt", "r");
 printf("Content of the file:\n");
 char ch;
 while ((ch = fgetc(file)) != EOF) {
 putchar(ch);
 }
 fclose(file);
 return 0;
 }*/



 /*#include <stdio.h>
 int main() {
 FILE *file;
 // Step 1 & 2: Create and write to the file
 file = fopen("example.txt", "w");
 // Write multiple lines to the file
 fprintf(file, "Hello, World!\n");
 fprintf(file, "Welcome to C programming.\n");
 fclose(file);
 printf("File created and content written successfully.\n");
 // Step 3: Reopen the file for reading
 file = fopen("example.txt", "r");
 // Step 4: Read and display each line using fgets()
 char line[100]; // Buffer to store each line
 printf("%s", fgets(line, sizeof(line), file));
 printf("%s", fgets(line, sizeof(line), file));
 fclose(file);
 return 0;
 }*/
 /*#include<stdio.h>
int main()
{
FILE *file;
  char ch;
    file = fopen("input.txt", "w");
fprintf(file,"deepa");
fclose(file);
    file=fopen("input.txt","r");

    printf("Contents of the file:\n");


    while ((ch = fgetc(file)) !=EOF)
{
        putchar(ch);
    }
    fclose(file);
return 0;
}*/

#include<stdio.h>
int main()
{
FILE *src, *DESCT;
    char ch;
    src = fopen("src.txt", "w");
    fprintf(src,"deepa");
    fclose(src);
    src=fopen("SRC.txt","r");
    DESCT = fopen("DESCT.txt", "a");



    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, DESCT);
    }
    printf("Data successfully appended to destination file.\n");
    fclose(src);
    fclose(DESCT);
return 0;
}



