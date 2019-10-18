Example: Sort strings in the dictionary order
#include <stdio.h>
#include <string.h>
int main() {    
    char str[5][50], temp[50];
    printf("Enter 5 words: ");   
    for(int i = 0; i < 5; ++i) {
        fgets(str[i], sizeof(str[i]), stdin);
    }
    for(int i = 0; i < 5; ++i) {
        for(int j = i+1; j < 5 ; ++j) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nIn the lexicographical order: \n");
    for(int i = 0; i < 5; ++i) {
        fputs(str[i], stdout);
    }
    return 0;
}
Output

Enter 5 words: R programming
JavaScript
Java
C programming
C++ programming

In the lexicographical order:
C programming
C++ programming
Java
JavaScript
R programming