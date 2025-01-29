#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject* weatherData){
    m_weatherData = weatherData;
    m_weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure){
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    display();
}

void CurrentConditionsDisplay::display(){
    std::cout<<"Current conditions: "<< m_temperature << "F degrees and "<<m_humidity<<"% homidity\n";
}
