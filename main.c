#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "student.h"

int main(int argc, char *argv[]) {
	
	FILE* inFile;
	char c;
	int count = 0;
	int userIdInput;
	
	if (argc == 2) { // ends program if there is not the correct number of command line arguements
        
    } else {
        printf("ERROR NO ARGS");
        return -1;
    }
	
	inFile = fopen(argv[1], "r");
    
    if (inFile == NULL) { // ends program if file does not open correctly
        printf("ERROR FILE NOT OPEN");
        return -1;
    }
	
	for (c = getc(inFile); c != EOF; c = getc(inFile)) { // gets number of lines to go through
        if (c == '\n')
            count = count + 1; 
    }
	
	count += 1;
	
	rewind(inFile);
	
	Student students[count + 1];
	
	for (int i = 0; i < count; i++) {
		fscanf(inFile, "%d,%s", &students[i].id, students[i].name);
	}
	
	fclose(inFile);
	
	print(students, count);
	
	sortStudent(students, count);
	
	print(students, count);
	
	scanf("%d", &userIdInput);
	
	Student userStudent = searchStudent(students, count, userIdInput);
	
	printf("(%d,%s)", userStudent.id, userStudent.name);
	
	// free(students);
}