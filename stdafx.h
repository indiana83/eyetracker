/************************************************************************
*                                                                       *
* stdafx.h -- header file of the project						        *
*                                                                       *
* Copyright (c) ISE/TUKL. All rights reserved.                          *
*                                                                       *
* This code is licensed under the terms of the                          *
* Microsoft Kinect for Windows SDK (Beta)                               *
* License Agreement: http://kinectforwindows.org/KinectSDK-ToU          *
*                                                                       *
* Modified by: Li Li, Ander Guarde                                      *
* Date: 17.03.2012                                                      *
* Changelog:                                                            *
* 1. add C++ string processing header files                             *
* 2. add OpenCV header files			                                *
*                                                                       *
************************************************************************/

// include file for standard system and project includes

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Header Files
#include <windows.h>
#include <ole2.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// C++ Header Files
#include <iostream>
#include <iomanip>
#include <fstream>

// OpenCV Header Files
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

// Direct2D Header Files
#include <d2d1.h>
#include <d2d1helper.h>

// DirectWrite
#include <dwrite.h>

#pragma comment ( lib, "winmm.lib" )
#pragma comment ( lib, "d2d1.lib" )

#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif
