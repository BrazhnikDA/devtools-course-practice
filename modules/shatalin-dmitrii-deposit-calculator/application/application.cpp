// Copyright 2022 Brazhnik Dmitry

#include "include/deposit_calculator_application.h"

int main(int argc, const char** argv) {
    Application app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
