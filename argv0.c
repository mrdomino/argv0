#include <assert.h>
#include <stdio.h>

int main(int argc, const char* argv[])
{
	int ret;

	assert(argc > 0);
	ret = puts(*argv) == EOF;
	if (ret)
		perror("puts");
	return (int)ret;
}
