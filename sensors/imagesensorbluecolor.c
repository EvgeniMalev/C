#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {
    cv::Mat image = cv::imread("test.jpg");

    if (image.empty()) {
        printf("Грешка при зареждане на изображението\n");
        return -1;
    }

    cv::Mat hsv;
    cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);

    cv::Scalar lower_blue(100, 100, 50);
    cv::Scalar upper_blue(140, 255, 255);

    cv::Mat mask;
    cv::inRange(hsv, lower_blue, upper_blue, mask);

    int blue_pixels = cv::countNonZero(mask);
    int total_pixels = image.rows * image.cols;

    double ratio = (double)blue_pixels / total_pixels;

    printf("Син процент: %.2f%%\n", ratio * 100);

    if (ratio > 0.05) {
        printf("Има син цвят\n");
    } else {
        printf("Няма значителен син цвят\n");
    }

    return 0;
}
