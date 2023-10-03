#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: filename.
 * @text_content: content to be appended.
 *
 * Return: 1 if the file exists or -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int ncharacter;
    int rwr;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if (text_content)
    {
        for (ncharacter = 0; text_content[ncharacter]; ncharacter++)
            ;

        rwr = write(fd, text_content, ncharacter);

        if (rwr == -1)
            return (-1);
    }

    close(fd);

    return (1);
}
