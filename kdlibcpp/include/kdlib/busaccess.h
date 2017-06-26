#pragma once

#include <Windows.h>
#include <wdbgexts.h>

#include <vector>

namespace kdlib {

///////////////////////////////////////////////////////////////////////////////
std::vector<byte> readBusData(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length);
///////////////////////////////////////////////////////////////////////////////

} // kdlib namespace end
