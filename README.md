# Canny Edge Detection in C++

A C++ implementation of the **Canny edge detection algorithm** using OpenCV, exploring the fundamentals of classical computer vision and image processing.

## Overview

Edge detection is a fundamental computer vision technique used to identify boundaries and structural features in images. It plays an important role in applications such as object detection, image segmentation, feature extraction, and visual inspection.

This project focuses on implementing the Canny edge detection pipeline in C++, with an emphasis on understanding the individual stages involved in extracting meaningful edges from an image.

## Steps for Canny edge detector

The Canny edge detector consists of five main steps:

1. **Gaussian Smoothing** — Reduces image noise before edge extraction.
2. **Gradient Computation** — Computes intensity gradients to identify potential edges.
3. **Non-Maximum Suppression** — Thins detected edges by retaining local gradient maxima.
4. **Double Thresholding** — Classifies pixels into strong, weak, and non-edge candidates based on gradient magnitude.
5. **Edge Tracking by Hysteresis** — Preserves weak edges connected to strong edges while rejecting isolated responses.

### Pipeline

```text
Input Image
     |
     v
Gaussian Smoothing
     |
     v
Gradient Computation
     |
     v
Non-Maximum Suppression
     |
     v
Double Thresholding
     |
     v
Edge Tracking by Hysteresis
     |
     v
Final Edge Map
```

## Project Structure

```text
edge-detection/
├── src/
│   └── ...
├── CMakeLists.txt
└── README.md
```






