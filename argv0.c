#include <stdio.h>
#include <string.h>

int
main(int argc, char* argv[])
{
	int   r = 0;
	char *s = "usage: %s\n";

	if (argc != 1)
		r |= 1;
	else
		s += strlen("usage: ");
	if (dprintf(r + 1, s, argv[0]) < 0)
		r |= 2;
	return r;
}
