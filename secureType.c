#include <xdo.h>
#include <stdio.h>
#include <stdlib.h>

char *getln();

int main (int argc, char *argv[]) {
    char *input = getln();
    xdo_t * x = xdo_new(NULL);

    if (argc < 2) {
        sleep(3);
    } else {
        sleep(atoi(argv[1]));
    }

    xdo_enter_text_window(x, CURRENTWINDOW, input, 12000);
    return 0;
}

char *getln() {
    char *line = NULL, *tmp = NULL;
    size_t size = 0, index = 0;
    int ch = EOF;

    while (ch) {
        ch = getc(stdin);

        /* Check if we need to stop. */
        if (ch == EOF || ch == '\n')
            ch = 0;

        /* Check if we need to expand. */
        if (size <= index) {
            size += 1;
            tmp = realloc(line, size);
            if (!tmp) {
                free(line);
                line = NULL;
                break;
            }
            line = tmp;
        }

        /* Actually store the thing. */
        line[index++] = ch;
    }

    return line;
}
