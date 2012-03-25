/************************************************************************
*                                                                       *
* Project: ISEKinectViewer                                              *
*                                                                       *
* Copyright (c) ISE/TUKL. All rights reserved.                          *
*                                                                       *
* This code is licensed under the terms of the                          *
* Microsoft Kinect for Windows SDK (Beta)                               *
* License Agreement: http://kinectforwindows.org/KinectSDK-ToU          *
*                                                                       *
* Author: Li Li, Ander Guarde                                           *
* E-mail: lili@eit.uni-kl.de                                            *
* Date: 20.02.2012                                                      *
*                                                                       *
* Project Changelog:                                                    *
* 20/02/2012	LL	Creation of the project, upload the source code     *
*                                                                       *
************************************************************************/

=============================
OVERVIEW  
.............................
This module provides sample code used to demonstrate Kinect NUI processing such as
capturing depth stream, color video stream and skeletal tracking frames and
displaying them on the screen.
When sample is executed you should be able to see the following:
- the depth stream, showing background in grayscale and different people in different
  colors, darker colors meaning farther distance from camera. Note that people will
  only be detected if their entire body fits within captured frame.
- Tracked NUI skeletons of people detected within frame. Note that skeletons will
  only appear if the entire body of at least one person fits within captured frame.
- Color video stream
- Frame rate at which capture is being delivered to sample application.

=============================
FILES   
.............................
- DrawDevice.cpp: implementation of DrawDevice helper class used to manage Direct3D device
- DrawDevice.h: declaration of DrawDevice helper class
- NuiImpl.cpp: Implementation of CSkeletalViewerApp methods dealing with NUI processing
- Resource.h: declaration of resource identifiers
- Viewer.cpp: Application's main function and WndProc
- Viewer.h: Declaration of CSkeletalViewerApp class
- Viewer.ico: Application icon used in title bar and task bar
- Viewer.rc: Declaration of sample application resources
- stdafx.cpp: used to create a pre-compiled header from common includes
- stdafx.h: includes common files needed by sample
- targetver.h: used for windows platform versioning

=============================
DEPENDENCIES
.............................
- Linker/Input/Additional dependencies:
D:\opencv\build\x86\vc10\lib\opencv_highgui231d.lib
D:\opencv\build\x86\vc10\lib\opencv_imgproc231d.lib
D:\opencv\build\x86\vc10\lib\opencv_ml231d.lib
D:\opencv\build\x86\vc10\lib\opencv_video231d.lib
D:\opencv\build\x86\vc10\lib\opencv_legacy231d.lib

- VC++ Directories/Include directories:
D:\opencv\build\include\opencv
D:\opencv\build\include

- VC++ Directories/Library directories:
D:\opencv\build\x86\vc10\lib

- put tbb_debug.dll into D:\opencv\build\x86\vc10\bin
