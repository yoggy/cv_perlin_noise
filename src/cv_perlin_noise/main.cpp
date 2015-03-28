#include "stdafx.h"

#include "PerlinNoise.h"

int main(int argc, char* argv[])
{
	cv::Mat perlin_noise_img = CreatePerlinNoiseImage(cv::Size(320, 240), 1.0f);

	cv::imshow("perlin_noise_img", perlin_noise_img);
	cv::waitKey(0);

	return 0;
}

