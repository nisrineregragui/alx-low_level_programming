#include "main.h"
/*n*/int create_file(const char *filename, char *text_content)/*m*/
{
int f, s, l = 0;

if (filename == NULL)
{
	return (-1);
}
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(f, text_content, l);

	if (f == -1 || s == -1)
{
	return (-1);
}
	close(f);

	return (1);
}

