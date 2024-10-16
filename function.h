#pragma once
#include <stdio.h>
#include <fstream>
#include <string>  
#include <iostream>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc.hpp>

std::string SHA256_ImgToFile(const std::string &path); //Функция для вычисления хеша
void Shifter(cv::Mat &img); //Функция, отвечающая за наложение фильтра на картинку
