//
//  haar_cv.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/11/27.
//  Copyright © 2017年 cb. All rights reserved.
//

#include <stdio.h>

#include "head_cv.h"


string face_cascade_name = "/usr/local/share/OpenCV/haarcascades/haarcascade_frontalface_alt_tree.xml";
string face_cascade_name_ = "/usr/local/share/OpenCV/haarcascades/haarcascade_frontalcatface.xml";
CascadeClassifier face_cascade;
string window_name = "FaceDetect";

void detectAndDisplay(Mat frame){
    vector<Rect> faces;
    Mat frame_gray;
    cvtColor(frame,frame_gray,CV_BGR2GRAY);
    equalizeHist(frame_gray,frame_gray);
    face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE,Size(30,30));
    
    for ( int i=0; i < faces.size() ;  i++){
        Point center(faces[i].x+faces[i].width*0.5,
                     faces[i].y + faces[i].height*0.5
                     );
        ellipse(frame, center, Size(faces[i].width*0.5,faces[i].height*0.5), 0 , 0, 360, Scalar(255,0,255),4,8,0);
        
    }
    imshow(window_name,frame);
    moveWindow(window_name, 800,40);
    
}
int main(int argc , char** argv){
    Mat in_frame,out_frame;
    Mat edage;
    if(!face_cascade.load(face_cascade_name)){
        printf("Error ! 无法加载级联分类器文件。");
        return -1;
    }
    
    const char win1[] = "Grabbing...";
    double fps = 60; //每秒的帧数
    char file_in[]="/Users/cb/Documents/opencv_learning/Opencv3_learning/video/a.mp4";
    
    VideoCapture inVid(file_in);//读取视频
    //        VideoCapture inVid(0);  //打开默认相机
    if(!inVid.isOpened()){//检查是否有错误
        cout<<"Error! Camera not ready....\n";
        return -1;
    }

    //为原始视频和最终视频创建俩个窗口
    namedWindow(win1);
    namedWindow(window_name);
    //  namedWindow(win2);
    while(true){
        //从摄像机中读取帧
        inVid>>in_frame;
        //将帧化为灰度
        //cvtColor(in_frame, out_frame, COLOR_BGR2GRAY);
        cvtColor(in_frame, out_frame, CV_BGR2BGRA);

        imshow(win1, in_frame);

        detectAndDisplay(out_frame);
        if(waitKey(1000/fps)>=0){
            break;
        }
        
    }
    inVid.release();//关闭摄像机
    return 0;
}
