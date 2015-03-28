#include "stdafx.h"

#include <math.h>

#include "PerlinNoise.h"

cv::Mat CreatePerlinNoiseImage(const cv::Size &size, const float &scale)
{
	cv::Mat img;
	img.create(size, CV_8UC1);

	// TODO: implement this algorithm... http://cs.nyu.edu/~perlin/noise/  

	return img;
}
