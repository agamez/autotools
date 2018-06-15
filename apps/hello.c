#include <stdio.h>

#include <libHello.h>

int main(int argc, char *argv[])
{
	int ret;
	ret = hello();
	printf("If we calculate fmod(35, 2.25) we get %f\n", fmod_wrapper(35, 2.25));
}
