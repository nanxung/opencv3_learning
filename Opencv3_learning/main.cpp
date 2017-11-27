//
//  main.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/11/26.
//  Copyright © 2017年 cb. All rights reserved.
//

#include <iostream>

#include <opencv2/opencv.hpp>

#include <opencv2/highgui/highgui.hpp>

#include <opencv2/core/core.hpp>

using namespace cv;
using namespace std;

/*
int main(int argc, const char * argv[]) {
    // insert code here...
    
    Mat img=imread("/Users/cb/Pictures/code/a.jpg");
    imshow("Original Image",img);
    
    Mat grayImage,edge;
    //转换为灰度图
    cvtColor(img, grayImage, CV_BGR2GRAY);
    //降噪
    blur(grayImage, edge , Size(3,3));
    //运行Canny算子，3为threshold1,9为shreshold2
    Canny(edge, edge, 3, 9);
//    std::cout << "Hello, World!\n";
    
    imshow("After canny", edge);
    
    waitKey(0);
    return 0;
}
*/
