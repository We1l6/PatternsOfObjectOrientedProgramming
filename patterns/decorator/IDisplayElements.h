
#ifndef IDISPLAYELEMENTS_H
#define IDISPLAYELEMENTS_H

class IDisplayElements
{
public:
    virtual void display() = 0;
    virtual ~IDisplayElements() = default;
    IDisplayElements(const IDisplayElements&) = delete;
    IDisplayElements& operator=(const IDisplayElements&) = delete;

protected:
    IDisplayElements() = default;
};

#endif // IDISPLAYELEMENTS_H