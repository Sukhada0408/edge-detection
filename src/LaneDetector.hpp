#pragma once
#include <opencv2/opencv.hpp>

class LaneDetector
{
    public:
        LaneDetector (int kernel, double canlow, double canhigh);
        const cv::Mat detector (const cv::Mat& input);
    private:
        int kernel_;
        double canlow_;
        double canhigh_;
};