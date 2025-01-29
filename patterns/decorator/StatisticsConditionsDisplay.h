#ifndef STATISTICSCONDITIONSDISPLAY_H
#define STATISTICSCONDITIONSDISPLAY_H

#include <iostream>
#include "IObserver.h"
#include "ISubject.h"
#include "IDisplayElements.h"

class StatisticsConditionsDisplay  : public IObserver, public IDisplayElements
{
    float m_temperature;  
    float m_humidity;
    float m_pressure;

    ISubject* m_weatherData;
public:

    StatisticsConditionsDisplay (ISubject* weatherData);
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif // STATISTICSCONDITIONSDISPLAY_H
