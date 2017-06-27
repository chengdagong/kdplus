#include "stdafx.h"

#include "kdlib\exceptions.h"

#include "pybusaccess.h"

namespace pykd {

	///////////////////////////////////////////////////////////////////////////////
	python::list readBusData(unsigned long busType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length)
	{
		std::vector<unsigned char>  lst;

		do {
			AutoRestorePyState  pystate;
			lst = kdlib::readBusData(busType, busNumber, slotNumber, offset, length);
		} while (false);

		return vectorToList(lst);
	}

}