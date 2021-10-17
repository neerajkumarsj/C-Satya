#include <stdio.h>
typedef struct student
{
	unsigned age: 32;
	unsigned gender: 1;
}student_t;

int main()
{
	student_t s = {23, 0};

	printf("Age: %u\nGender: %u\n", s.age, s.gender);
	printf("Sizeof s: %ld", sizeof(s));
}
