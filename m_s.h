#ifndef m_s_h
#define m_s_h

#include "Arduino.h"

class ms
{
public:
    ms(long cycle_, long delay_);
    int tick(long millis_ = millis());
private:
    long keep_;
    long time_keep_;
    long cycle;
    long cu = 0;
    long delays;
    boolean ch;
};

#endif