#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

#define MAX_STRING_LENGTH 1001

void saveData(char *data) {
    FILE *file = fopen("take2.txt", "w");
    if(file != NULL) {
        fprintf(file, "%s", data);
        fclose(file);
    }
    else {
        printf("Error: take2.txt not responding!\n");
    }
}

void readData(char *data) {
    FILE *file = fopen("save.txt", "r");
    if(file != NULL) {
        fgets(data, MAX_STRING_LENGTH, file);
        fclose(file);
        data[strcspn(data, "\n")] = '\0';
    }
    else {
        printf("save.txt does not contain any data\n");
    }
}

void stripNewline(char *str) {
    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char data[MAX_STRING_LENGTH];
    char choice;

    readData(data);

    if(strlen(data) > 0) {
        printf("The previously entered data is: \"%s\"\n", data);
        printf("Do you want to override the existing data?\n");
        printf("Enter your choice:\n1. Yes [Y/y]\n2. No [N/n]\n");
        printf("Choice: ");
        scanf(" %c", &choice);
        if(choice == 'Y' || choice == 'y') {
            printf("Enter New Data: ");
            getchar();
            fgets(data, MAX_STRING_LENGTH, stdin);
            stripNewline(data);
            saveData(data);
        }
        else {
            printf("Exiting Editing Mode!\n");
        }

    }
    else {
        printf("No Previous Data was found!\n");
        printf("Enter data: ");
        fgets(data, MAX_STRING_LENGTH, stdin);
        saveData(data);
    }

    printf("Current Data: \"%s\"", data);

    getch();
    return 0;
}