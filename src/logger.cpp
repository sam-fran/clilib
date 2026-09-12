#include "cli_gl/logger.hpp"

#include <iostream>

namespace clilib
{
    Logger::Logger()
    {
        std::cout << "Logger init\n";
    }

    Logger::~Logger()
    {
        std::cout << "Logger end\n";
    }
    
    Logger& Logger::operator<(const char* message)
    {
        std::cout << message << std::endl;
        return *this;
    }
}
