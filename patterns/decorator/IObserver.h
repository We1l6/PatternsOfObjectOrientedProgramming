#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver
{
public:
    virtual void update(float temperature, float humidity, float pressure) = 0;
    virtual ~IObserver() = default;
    IObserver(const IObserver&) = delete;
    IObserver& operator=(const IObserver&) = delete;

protected:
    IObserver() = default;
};

#endif // IOBSERVER_H