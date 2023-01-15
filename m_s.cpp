#include "m_s.h"

ms::ms(long cycle_, long delay_) 
{
    cycle = cycle_;
    delays = delay_;
}

int ms::tick(long millis_ = millis())
{   
    
    if(millis_ > cycle + keep_ || ch) 
    {
        if(millis_ > cycle + keep_ ) {
            keep_ = millis_;
        }
        
        
        cu = delays - (millis_ - time_keep_);
        if(cu <= 0) 
        {
            ch = 0;
        }
        else
        {
            ch = 1;
        }
        return 1;
    }
    else 
    {
        time_keep_ = millis_;
    }
    
    return 0;
}