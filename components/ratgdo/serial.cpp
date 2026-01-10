#include "serial.h"

using namespace esphome::ratgdo::serial;

void GDOSerial::setInvert(bool on)
{
  this->m_invert = on;
}