#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "IObserver.h"

class ISubject
{
public:
    virtual void registerObserver(IObserver* observer) = 0;
    virtual void removeObserver(IObserver* observer) = 0;
    virtual void notifyObservers() = 0;
    virtual void setMeasurements(float temperature, float humidity, float pressure) = 0;
    virtual ~ISubject() = default;
    ISubject(const ISubject&) = delete;
    ISubject& operator=(const ISubject&) = delete;

protected:
    ISubject() = default;
};

#endif // ISUBJECT_H
