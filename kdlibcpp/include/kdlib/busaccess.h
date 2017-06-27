#pragma once

#include <string>
#include <vector>

#include "kdlib/dbgtypedef.h"
#include "kdlib/dbgengine.h"

namespace kdlib {

///////////////////////////////////////////////////////////////////////////////
void readBus(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, void* buffer, unsigned long length);

///////////////////////////////////////////////////////////////////////////////

std::vector<unsigned char> readBusData(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length);
///////////////////////////////////////////////////////////////////////////////

} // kdlib namespace end
