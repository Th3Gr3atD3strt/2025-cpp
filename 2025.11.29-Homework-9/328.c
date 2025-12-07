#include <stdio.h>
#include <string.h>

typedef struct{
    char surname[50];
    char name[50];
    float math;
    float physics;
    float informatics;
}Student;

int main() {
	int n = 0;
	scanf("%d", &n);
	Student students[n];
	for (int i = 0; i < n; i++){
	    char surname[50];
        char name[50];
        float math;
        float physics;
        float informatics;
	    scanf("%s %s %f %f %f", &surname, &name, &math, &physics, &informatics);
	    Student student = {0};
	    strcpy(student.name, name);
	    strcpy(student.name, name);
	    student.math = math;
	    student.physics = physics;
	    student.informatics = informatics;
	    students[i] = student;
	    
	}
	float ans_math = 0;
	float ans_phys = 0;
	float ans_inf = 0;
	for (int i = 0; i < n; i++){
	    ans_math += students[i].math;
	    ans_phys += students[i].physics;
	    ans_inf += students[i].informatics;
	}
	printf("%f %f %f", ans_math / n, ans_phys / n, ans_inf / n);
	return 0;

}
