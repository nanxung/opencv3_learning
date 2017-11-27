//
//  video_cv.cpp
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
int main(int argc , char** args){
    Mat in_frame,out_frame;
    const char win1[] = "Grabbing...",win2[] = "Recoding....";
    double fps = 50; //每秒的帧数
    char file_out[]="recorded.avi";
    VideoCapture inVid(0);  //打开默认相机
    if(!inVid.isOpened()){//检查是否有错误
        cout<<"Error! Camera not ready....\n";
        return -1;
    }
    //获取输入视频的宽度和高度
    int width = (int)inVid.get(CAP_PROP_FRAME_WIDTH);
    int height=(int)inVid.get(CAP_PROP_FRAME_HEIGHT);
    VideoWriter recVid(file_out,VideoWriter::fourcc('M', 'S', 'V', 'C'),fps,Size(width,height));
    if(!recVid.isOpened()){
        cout<<"Error!Video file not opened...\n";
        return -1;
    }
    //为原始视频和最终视频创建俩个窗口
    namedWindow(win1);
    namedWindow(win2);
    while(true){
        //从摄像机中读取帧
        inVid>>in_frame;
        //将帧化为灰度
        cvtColor(in_frame, out_frame, COLOR_BGR2GRAY);
        //将帧写入视频文件（编码并保存）
        recVid<<out_frame;
        imshow(win1, in_frame);
        imshow(win2, out_frame);
        if(waitKey(1000/fps)>=0){
            break;
        }
        
    }
    inVid.release();//关闭摄像机
    return 0;
}
 */
