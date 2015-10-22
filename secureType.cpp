extern "C" {
#include <xdo.h>
}
#include <string>
#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    std::string input;
    std::getline (std::cin, input);
    xdo_t * x = xdo_new(NULL);

    if (argc < 2) {
        sleep(3);
    } else {
        sleep(atoi(argv[1]));
    }

    xdo_enter_text_window(x, CURRENTWINDOW, input.c_str(), 12000);
    return 0;
}
