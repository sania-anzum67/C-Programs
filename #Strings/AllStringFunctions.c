#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "Hello";
    char str5[50] = "Everyone";
    char name[50] = "Artificial Intelligence";

    printf("Original str1: %s\n", str1);
    printf("Original str2: %s\n\n", str2);

    
    printf("Length of str1: %lu\n", strlen(str1));

    
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);

    
    strcat(str1, str2);
    printf("Concatenated str1 + str2: %s\n", str1);

    
    if (strcmp(str4, str5) == 0)
        printf("str4 and str5 are equal\n");
    else
        printf("str4 and str5 are NOT equal\n");

    
    char temp[50];
    strcpy(temp, str5);
    int len = strlen(temp);
    for (int i = 0; i < len / 2; i++) {
        char ch = temp[i];
        temp[i] = temp[len - i - 1];
        temp[len - i - 1] = ch;
    }
    printf("Reversed str5: %s\n", temp);

    
    char *pos = strchr(name, 'I');
    if (pos != NULL)
        printf("'I' found in name at position: %ld\n", pos - name + 1);

    // 7. strstr - find substring
    char *sub = strstr(name, "Intel");
    if (sub != NULL)
        printf("Substring 'Intel' found: %s\n", sub);

    
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("First 3 chars of str2 copied to str3: %s\n", str3);

    
    strncat(str4, str5, 4);
    printf("str4 after adding first 4 chars of str5: %s\n", str4);

    
    if (strcasecmp("hello", "HELLO") == 0)
        printf("Strings are equal ignoring case\n");

    return 0;
}
