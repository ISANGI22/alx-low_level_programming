#include <stdio.h>
#define UNUSED(x) (void)(x)

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return 0;
}
