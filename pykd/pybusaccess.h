#pragma once

#include <boost/python/list.hpp>
namespace python = boost::python;

#include "kdlib/busaccess.h"

#include "stladaptor.h"
#include "pythreadstate.h"

namespace pykd {
	python::list readBusData(unsigned long busType, unsigned long busNumber, unsigned long slotNumber, unsigned long offset, unsigned long length);
}