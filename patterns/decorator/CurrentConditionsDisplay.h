
#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <iostream>

#include "IObserver.h"
#include "ISubject.h"
#include "IDisplayElements.h"

class CurrentConditionsDisplay : public IObserver, public IDisplayElements
{
    float m_temperature;  
    float m_humidity;
    float m_pressure;

    ISubject* m_weatherData;
public:

    CurrentConditionsDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif // CURRENTCONDITIONSDISPLAY_H