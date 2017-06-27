#include "stdafx.h"

#include <vector>

#include <windows.h>

#include <boost/numeric/conversion/cast.hpp>

#include "kdlib/dbgengine.h"

#include "win/dbgmgr.h"
#include "win/exceptions.h"

using boost::numeric_cast;

namespace  kdlib {

	void readBus(unsigned long busDataType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, void* buffer, unsigned long length)
	{
		HRESULT hres;

		hres = g_dbgMgr->dataspace->ReadBusData(busDataType, busNumber, slotNumber, offset, buffer, length, NULL);

		if (FAILED(hres)) {
			throw BusException(busDataType, busNumber, slotNumber, offset);
		}
	}
}