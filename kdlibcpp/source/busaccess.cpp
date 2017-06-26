#include "stdafx.h"

#include <vector>

#include "kdlib/busaccess.h"
#include "kdlib/exceptions.h"

namespace kdlib {


///////////////////////////////////////////////////////////////////////////////
std::vector<byte> readBusData(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length)
{
	std::vector<byte> buffer(length);

	BUSDATA busData;
	memset(&busData, 0, sizeof(BUSDATA));

	busData.BusDataType = busDataType;
	busData.BusNumber = busNumber;
	busData.SlotNumber = slotNumber;
	busData.Offset = offset;
	busData.Length = length;
	busData.Buffer = &buffer[0];

	if (!Ioctl(IG_GET_BUS_DATA, &busData, sizeof(busData))) {
		throw DbgException("failed to read bus data");
	}
	
	return buffer;
}

///////////////////////////////////////////////////////////////////////////////

} // kdlib namespace end
