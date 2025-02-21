#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int GetCSVFileRows(char *filename) {
    int currentbufferindex = 0;
    int rowsamount = -1;
    char *buffer = (char *)malloc(sizeof(char) * 1000);

    for (int i = 0; i < strlen(filename); i++) {
        if (isdigit(filename[i])) {
            buffer[currentbufferindex] = filename[i];
            currentbufferindex += 1;
        }
    }
    buffer[currentbufferindex] = '\0';
    rowsamount = atoi(buffer);
    return rowsamount;
}
char* FindStudentNameById(FILE *database, int studentId, int rows) {
    char StudentName[1025];
    memset(&StudentName, 0, sizeof(StudentName));

    for (int i = 0; i < )
}

char** FindStudentIdsByName(FILE *database, char* studentName) {

}

int main(int argc, char **argv) {
    int csvmode = 0;
    char studentname[1025];

    if (argc != 2) {
        perror("argc must be 2.\n");
        exit(EXIT_FAILURE);
    }

    int CSVrows = 
    if (CSVrows == 0) {
        perror("Number of rows is 0, file is empty.\n");
        exit(EXIT_FAILURE);
    }
    memset(&studentname, 0, sizeof(studentname));

    scanf("%i\n", &csvmode);
    if (!csvmode <= 4) {
        perror("csvmode cannot be bigger than 4.\n");
        exit(EXIT_FAILURE);
    }

    fgets(studentname, 1025, stdin);

    return 0;
}