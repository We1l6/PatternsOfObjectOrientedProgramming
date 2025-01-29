#include "decorator.h"

int main(){
    WeatherData weatherData;
    CurrentConditionsDisplay currentDispaly(&weatherData);
    weatherData.setMeasurements(1, 2, 3);
    weatherData.setMeasurements(3, 2, 1);
}