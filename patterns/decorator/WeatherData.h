#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <vector>
#include "IObserver.h"
#include "ISubject.h"

class WeatherData : public ISubject
{
    std::vector<IObserver*> observers;
    float m_temperature;  
    float m_humidity;
    float m_pressure;

public:
    WeatherData();
    void registerObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;
    void notifyObservers() override;
    void setMeasurements(float temperature, float humidity, float pressure) override;
};


#endif // WEATHERDATA_H
