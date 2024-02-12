#include "main.h"

/**
 * append_text_to_file - Change text at end of file.
 * @filename: pointer to file name.
 * @text_content: additional string at end of file.
 *
 * Return: If fail or NULL - -1.
 *         If file non existent or  the user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
