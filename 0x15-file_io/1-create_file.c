#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: takes string
 *
 * Return: returns the length int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}


/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: content of a file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, i = 0;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = _strlen(text_content);
		i = write(fd, text_content, len);
		if (i == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
