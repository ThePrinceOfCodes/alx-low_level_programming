#include "header.h"

/**
 * create_file - creates a new file
 * @filename: filename.
 * @text_content: contents to be writen to the file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int ncharacter;
    int rwr;

    if (!filename)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (fd == -1)
        return (-1);

    if (!text_content)
        text_content = "";

    for (ncharacter = 0; text_content[ncharacter]; ncharacter++)
        ;

    rwr = write(fd, text_content, ncharacter);

    if (rwr == -1)
        return (-1);

    close(fd);

    return (1);
}