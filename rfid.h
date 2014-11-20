/**
RFID.h - Library for reading 125khz RFIDs using an ID12 reader.
Frank Chiarulli Jr.
**/
#ifndef RFID_h
#define RFID_h

#include "Arduino.h"

class RFID
{
  public:
    RDFID(int pin);
    void start();
    void read();
    void stop();
    bool status();
  private:
    int _pin;
    bool status;
};

#endif
