#include "stdafx.h"

#include <vector>

#include "kdlib/busaccess.h"
#include "kdlib/exceptions.h"

namespace kdlib {


///////////////////////////////////////////////////////////////////////////////
std::vector<unsigned char> readBusData(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length)
{
	std::vector<unsigned char> buffer(length);

	readBus(busDataType, busNumber, slotNumber, offset, &buffer[0], length);
	return buffer;
}

///////////////////////////////////////////////////////////////////////////////

} // kdlib namespace end
