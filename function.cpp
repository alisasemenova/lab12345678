#include <stdio.h>
#include <openssl\sha.h>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <fstream>
#include <string> 
#include <iostream>

void Shifter(cv::Mat &img)
{
    for (int i =0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            img.at<cv::Vec3b>(i, j)+=cv::Vec3b(50, 25, 35);
        }
    }
} 

std::string SHA256_ImgToFile(const std::string &path)
{
    std::stringstream result;

    unsigned char hash[SHA256_DIGEST_LENGTH];

    std::fstream file(path, std::ios_base::in | std::ios_base::binary); //открывает файл в бинарном виде
    
    //считываем в буфер
    file.seekg(0, std::ios::end);
    int SizeOfBuffer = file.tellg(); 
    file.seekg(0, std::ios::beg);

    char *data = new char[SizeOfBuffer];
    file.read(data, SizeOfBuffer);

    SHA256_CTX img;
    SHA256_Init(&img);
    SHA256_Update(&img, data, SizeOfBuffer);
    SHA256_Final(hash, &img);

    delete [] data;
   
    file.close();

    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) //преобразование хеша в строку для вывода
    {
        result << std::hex << (int)hash[i];
    }
    return result.str();
}
