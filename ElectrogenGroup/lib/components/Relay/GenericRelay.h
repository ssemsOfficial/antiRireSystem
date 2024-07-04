#ifndef GENERICRELAY_H
#define GENERICRELAY_H

#include"../BSP.h"

class GenericRelay
{
protected:
    int _pin;
    bool _relayState;
public:
    GenericRelay(int pin)
        : _pin(pin)
    {}    
    ~GenericRelay()
    {}
    
    void init(){
        pinMode(_pin, OUTPUT);
        _relayState = digitalRead(_pin);
    }
    void openRelay(){
        digitalWrite(_pin, OPEN_GENERIC_RELAY);
        _relayState = ON_GENERIC_RELAY_OPENED;
    }
    void closeRelay(){
        digitalWrite(_pin, CLOSE_GENERIC_RELAY);
        _relayState = ON_GENERIC_RELAY_CLOSED;
    }
    void setPin(int pin){
        _pin = pin;
    }
    int getPin(){
        return _pin;
    }
    void setRelayState(bool RelayState){
        _relayState = RelayState;
    }
    bool getRelayState(){
        return _relayState;
    }
};

#endif