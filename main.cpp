#include <stdio.h>
#include <openssl\sha.h>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <fstream>
#include <string>  
#include <iostream>
#include "function.h"
int main()
{
    unsigned char hash[SHA256_DIGEST_LENGTH];
    cv::Mat img_first = cv::imread("pic.jpg", cv::IMREAD_ANYCOLOR);
    cv::imshow("Original", img_first);
    std::string hash_first = SHA256_ImgToFile("pic.jpg"); //берём хеш картинки
    Shifter(img_first); //выдоизменяем картинку
    cv::imwrite("pic2.jpg", img_first);
    cv::imshow("After", img_first);
    std::string hash_last = SHA256_ImgToFile("pic2.jpg"); //берём хеш видоизменённой картинки
    std::cout << "hash first: " << hash_first << std::endl;
    std::cout << "hash second: " << hash_last << std::endl;
    std::cout << (hash_first == hash_last) << std::endl;

    cv::waitKey();
   
}
