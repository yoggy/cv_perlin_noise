cv_perlin_noise
====
perlin noise image generator for OpenCV.

* ![https://farm9.staticflickr.com/8711/16962259021_28ab517b55_m.jpg](https://farm9.staticflickr.com/8711/16962259021_28ab517b55_m.jpg)

how to use
----

    #include "PerlinNoise.h"
    #include <opencv2/highgui.hpp>
    
    int main(int argc, char* argv[])
    {
        cv::Mat perlin_noise_img = CreatePerlinNoiseImage(cv::Size(320, 240));
    
        cv::imshow("perlin_noise_img", perlin_noise_img);
        cv::waitKey(0);
    
    	return 0;
    }


reference
----
* Improved Noise reference implementation (Ken Perlin)
  * http://cs.nyu.edu/~perlin/noise/


libraries
----
cv_perlin_noise uses the following libraries.

  * OpenCV 3.0.0 beta
    * http://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.0.0-beta/
