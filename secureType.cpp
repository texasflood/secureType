extern "C" {
#include <xdo.h>
}
#include <string>
#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main(int argc, char *argv[]) {
    std::string input;
    std::getline (std::cin, input);
    xdo_t * x = xdo_new(NULL);

    if (argc < 2) {
        sleep(3);
    } else {
        char* endptr;
        unsigned long value = strtoul(argv[1], &endptr, 10);
        if (endptr != argv[1] && *endptr == '\0') {
            sleep(value);
        } else {
            std::cout << "Failed to convert " << argv[1] << " to an "
                    "integer\n";
            return -1;
        }
    }

    xdo_enter_text_window(x, CURRENTWINDOW, input.c_str(), 12000);
    return 0;
}
