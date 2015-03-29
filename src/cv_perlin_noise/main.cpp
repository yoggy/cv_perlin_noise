// opencv
#pragma warning(disable : 4819)
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#ifdef _DEBUG
#pragma comment(lib, "opencv_world300d.lib")
#else
#pragma comment(lib, "opencv_world300.lib")
#endif

#include "PerlinNoise.h"

int main(int argc, char* argv[])
{
	cv::Mat perlin_noise_img = CreatePerlinNoiseImage(cv::Size(320, 240));

	cv::imshow("perlin_noise_img", perlin_noise_img);
	cv::waitKey(0);

	return 0;
}
