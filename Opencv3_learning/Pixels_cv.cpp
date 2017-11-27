//
//  Pixels_cv.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/11/26.
//  Copyright © 2017年 cb. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace cv;
using namespace std;

/*
 对像素点的三原色进行操作，模版中只能用float类型
int main(int argc,char** argv){
    Mat original = imread("/Users/cb/Pictures/code/a.jpg",CV_LOAD_IMAGE_COLOR);
    Mat modified = imread("/Users/cb/Pictures/code/a.jpg",CV_LOAD_IMAGE_COLOR);
    for (int r=0 ; r<modified.rows ; r++){
        for (int c=0 ; c<modified.cols ; c++){
//            modified.at<uint8_t>(r,c)=modified.at<uint8_t>(r,c)*0.5f;
            
//                        modified.at<Vec3b>(r,c)[0]=modified.at<Vec3b>(r,c)[0]*0;
            
//                        modified.at<Vec3b>(r,c)[1]=modified.at<Vec3b>(r,c)[1]*0;
            
                        modified.at<Vec3b>(r,c)[2]=modified.at<Vec3b>(r,c)[2]*0;

        }
    }
    imshow("Original", original);
    imshow("Modified", modified);
    moveWindow("Modified", 500,30);
    
    waitKey();
    return 0;
}

*/
