cmake_minimum_required(VERSION 3.15..3.31)
project(decoratorPattern LANGUAGES CXX)

set(DECORATOR_SOURCES
    "decorator.cpp"
    "CurrentConditionsDisplay.cpp"
    "StatisticsConditionsDisplay.cpp"
    "WeatherData.cpp")

set(DECORATOR_HEADERS
    "decorator.h"
    "CurrentConditionsDisplay.h"
    "StatisticsConditionsDisplay.h"
    "WeatherData.cpp")
        
add_executable(decoratorPattern
  ${DECORATOR_SOURCES}
  ${DECORATOR_HEADERS}
)

if(${ENABLE_WARNINGS})
    target_set_warnings(
        decoratorPattern
        ${ENABLE_WARNINGS}
        ${ENABLE_WARNINGS_AS_ERRORS}
    )
endif()