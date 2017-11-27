//
//  DataPersistence_cv.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/11/27.
//  Copyright © 2017年 cb. All rights reserved.
//

#include <stdio.h>
#include "head_cv.h"
Mat img;
void tb1_Callback(int value, void *){
    Mat temp = img + value;
    imshow("main_win", temp);
}
int main(int argc , char** argv){
    img = imread("/Users/cb/Pictures/code/a.jpg");
    if(img.empty()){
        cout << "Cannont load image!" <<endl;
        return -1;
    }
    int tb1_value = 0;
    //加载滑动条的值
    FileStorage fs1("/Users/cb/Documents/opencv_learning/Opencv3_learning/config.xml", FileStorage::READ);
    tb1_value = fs1["tb1_value"]; //读取数据tb1_value的方法1
    fs1["tb1_value"] >> tb1_value; //读取数据tb1_value的方法2
    fs1.release();
    //创建滑动条
    namedWindow("main_win");
    createTrackbar("brightness", "main_win", &tb1_value, 255, tb1_Callback);
    tb1_Callback(tb1_value, NULL);
    waitKey();
    //退出时保存滑动条的值
    FileStorage fs2("/Users/cb/Documents/opencv_learning/Opencv3_learning/config.xml",FileStorage::WRITE);
    fs2 << "tb1_value" <<tb1_value;
    fs2.release();
    return 0;
}
