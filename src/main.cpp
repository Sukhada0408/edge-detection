#include "LaneDetector.hpp"
#include <iostream>
#include <chrono>

int main()
{
    cv::VideoCapture cap("input.mp4");
    if (!cap.isOpened())
    {
        std::cerr<<"Cannot open video"<<std::endl;
        return -1;
    }

    LaneDetector detect(5, 100, 150);
    cv::Mat frame;

    int frame_count = 0;
    double total_time = 0.0;

    while(cap.read(frame))
    {
        if (frame.empty()) break;

        auto start = std::chrono::high_resolution_clock::now();
        cv::Mat edges = detect.detector(frame);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);

        total_time += duration.count();
        frame_count++;

        std::cout<<"Frame "<<frame_count<<" latency: "<<duration.count()<<"ms"<<std::endl;

        cv::imshow("Edges", edges);
        cv::waitKey(0);

        if(cv::waitKey(1) == 'q') break;
    }

    if (frame_count > 0) {
        std::cout << "\nAverage latency: " << (total_time / frame_count) << " ms over "
                  << frame_count << " frames" << std::endl;
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
