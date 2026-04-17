#pragma once

#include <string>

enum DebugLevel {
    NONE,
    INFO,
    DEBUG,
    TRACE,
    RIDICULOUS, // Use if insane
};

#define SERIAL_CLEAR "\033[3J\033[H\033[2J"

void serial_printf(enum DebugLevel level, const char* fmt, ...);