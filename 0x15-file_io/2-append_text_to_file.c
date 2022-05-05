#include "holberton.h"

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
 * append_text_to_file - append text to a file
 * @filename: filename
 * @text_content: content of a text
 * Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, i = 0;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
