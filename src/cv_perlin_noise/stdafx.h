#pragma once

#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

// opencv
#pragma warning(disable : 4819)
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#ifdef _DEBUG
#pragma comment(lib, "opencv_world300d.lib")
#else
#pragma comment(lib, "opencv_world300.lib")
#endif
