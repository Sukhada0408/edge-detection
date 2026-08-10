#include "LaneDetector.hpp"

LaneDetector::LaneDetector(int kernel, double canlow, double canhigh)
    : kernel_(kernel), canlow_(canlow), canhigh_(canhigh) {}  //class constructor

const cv::Mat LaneDetector::detector (const cv::Mat& input)
{
    cv::Mat gray, blur, edges;
    cv::cvtColor(input, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, blur, cv::Size(kernel_, kernel_), 0);
    cv::Canny(blur, edges, canlow_, canhigh_);
    return edges;
}