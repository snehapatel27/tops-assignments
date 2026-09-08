#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeFirstLetter(char str[]) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    char productName[] = "mobile";
    char username[] = "ashav";
    char anotherString[] = "laptop";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);
    capitalizeFirstLetter(anotherString);

    printf("%s\n", productName);
    printf("%s\n", username);
    printf("%s\n", anotherString);

    return 0;
}
