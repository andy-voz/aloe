#pragma once

#include "spdlog/logger.h"
#include "spdlog/spdlog.h"

#include <memory>

namespace aloe
{
    class Log
    {
    public:
        static void init();

        inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return coreLogger; }
        inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return clientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> coreLogger;
        static std::shared_ptr<spdlog::logger> clientLogger;
    };
}

// Core log macros
#define LOG_CORE_TRACE(...)     aloe::Log::getCoreLogger()->trace(__VA_ARGS__)
#define LOG_CORE_INFO(...)      aloe::Log::getCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)      aloe::Log::getCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...)     aloe::Log::getCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_FATAL(...)     aloe::Log::getCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LOG_TRACE(...)     aloe::Log::getClientLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)      aloe::Log::getClientLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)      aloe::Log::getClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)     aloe::Log::getClientLogger()->error(__VA_ARGS__)
#define LOG_FATAL(...)     aloe::Log::getClientLogger()->fatal(__VA_ARGS__)
