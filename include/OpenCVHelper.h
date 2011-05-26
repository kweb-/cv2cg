#pragma once
/*
 *  Copyright (c) 2011  Chen Feng (cforrest (at) umich.edu)
 *    and the University of Michigan
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

/* OpenCVHelper.h
   a set of helper functions for easier access to opencv */

//standard include
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <time.h>
//opencv include
#include "opencv2/opencv.hpp"

#include "Log.h" // please include "Log.hxx" in and only in your main.cpp
#include "CvMatHelper.h"
#include "CameraHelper.h"
#include "ImageHelper.h"
#include "DirHelper.h"
#include "IOHelper.h"
#include "UtilHelper.h"
#include "RotationHelper.h"
#include "FilterHelper.h"
#include "PerformanceHelper.h"

namespace helper
{
using namespace CvMatHelper;
using namespace CameraHelper;
using namespace ImageHelper;
using namespace DirHelper;
using namespace IOHelper;
using namespace UtilHelper;
using namespace RotationHelper;
using namespace FilterHelper;
using namespace PerformanceHelper;
}
