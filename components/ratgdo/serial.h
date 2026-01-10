#pragma once
#include "SoftwareSerial.h"

namespace esphome
{
    namespace ratgdo
    {
        namespace serial
        {
            class GDOSerial : public EspSoftwareSerial::UART
            {
            public:
                void setInvert(bool on);
            };
        }
    }
}