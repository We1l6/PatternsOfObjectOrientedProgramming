#include "StatisticsConditionsDisplay.h"

StatisticsConditionsDisplay::StatisticsConditionsDisplay(ISubject* weatherData){
    m_weatherData = weatherData;
    m_weatherData->registerObserver(this);
}

void StatisticsConditionsDisplay::update(float temperature, float humidity, float pressure){
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    display();
}

void StatisticsConditionsDisplay::display(){
    std::cout<<"Statistics conditions: "<< m_temperature*4 << "F degrees and "<<m_humidity<<"% homidity\n";
}