#pragma once

namespace clilib
{
    struct Logger
    {
        Logger();
        ~Logger();
        Logger& operator<(const char* message);
    };
} // namespace clilib