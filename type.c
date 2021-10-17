#include <stdio.h>

typedef struct
{
	char x;;
}char_t;

typedef struct
{
	int x;
}int_t;

int main()
{
	char_t a;
	printf("%ld", sizeof(a));
}
