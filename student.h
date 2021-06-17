#ifndef STUDENT
#define STUDENT

typedef struct Students_struct {
    
    int id;
	char name[11];
    
} Student;

void sortStudent(Student students[], int arrLength);

void print(Student students[], int arrLength);

Student searchStudent(Student students[], int arrLength, int id);

#endif