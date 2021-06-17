#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "student.h"

void sortStudent(Student students[], int arrLength) {
	
	for (int i = 0; i < arrLength - 1; i++) {
		for (int j = 0; j < arrLength - i - 1; j++)
			
			if (students[j].id > students[j + 1].id) {
				int temp;
				char tempName[11];
				strcpy(tempName, students[j].name);
				temp = students[j].id;
				students[j].id = students[j + 1].id;
				strcpy(students[j].name, students[j + 1].name);
				students[j + 1].id = temp;
				strcpy(students[j + 1].name, tempName);
			}
	
		}
	}
	

void print(Student students[], int arrLength) {
	
	for (int i = 0; i < arrLength; i++) {
			
			printf("(%d,%s) -> ", students[i].id, students[i].name);
	
	}
	printf("\n");
}

Student searchStudent(Student students[], int arrLength, int id) {
	
	for (int i = 0; i < arrLength; i++) {
		
		if (students[i].id == id) {
			
			return students[i];
			
		}
		
	}
	
	return students[0];
}