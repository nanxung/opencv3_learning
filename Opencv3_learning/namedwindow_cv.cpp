//
//  namedwindow_cv.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/11/26.
//  Copyright © 2017年 cb. All rights reserved.

//img /Users/cb/Pictures/code/a.jpg
//

#include <stdio.h>

#include <opencv2/opencv.hpp>

#include <opencv2/highgui/highgui.hpp>

#include <opencv2/core/core.hpp>

using namespace cv;
using namespace std;
/*
int main(int argv,char** argc){
    Mat file1=imread("/Users/cb/Pictures/code/a.jpg",CV_LOAD_IMAGE_UNCHANGED);
    Mat file2=imread("/Users/cb/Pictures/code/a.jpg",CV_LOAD_IMAGE_GRAYSCALE);
    //构造俩个窗口，以标题作为区分
    namedWindow("Color",CV_WINDOW_FREERATIO);
    namedWindow("Fixed",CV_WINDOW_AUTOSIZE);
    //显示窗口
    imshow("Color",file1);
    imshow("Fixed",file2);
    //改变窗口大小
    resizeWindow("Color",file1.cols/2, file1.rows/2);
    resizeWindow("Fixed", file2.cols/2, file2.rows/2);
    //移动窗口在桌面的位置
    moveWindow("Color", 600, 300);
    moveWindow("Fixed", 500, 250);
    
    waitKey();
    return 0;
}
*/
