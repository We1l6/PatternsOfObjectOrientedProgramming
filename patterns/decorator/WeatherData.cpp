#include "WeatherData.h"

WeatherData::WeatherData(){
    
}

void WeatherData::registerObserver(IObserver* observer){
    observers.push_back(observer);
}

void WeatherData::removeObserver(IObserver* observer){
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void WeatherData::notifyObservers() {
    for (auto observer : observers) {
        observer->update(m_temperature, m_humidity, m_pressure);
    }
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    notifyObservers();
}