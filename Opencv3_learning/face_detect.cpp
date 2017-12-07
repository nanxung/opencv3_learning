//
//  face_detect.cpp
//  Opencv3_learning
//
//  Created by cb on 2017/12/6.
//  Copyright © 2017年 cb. All rights reserved.
//

#include "head_cv.h"

#include <stdio.h>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
using namespace std;
using namespace cv;
CascadeClassifier faceCascade;

int main(int argc,char** argv){
    VideoCapture cap;
    if(!cap.open(0)){
        cout<<"open is fail!!"<<endl;
        return -1;
    }
    
    Mat img,imgGray;
    vector<Rect> faces;
    int c=0;
    while(c!=27){
        cap>>img;
        if(img.channels()==3){
            cvtColor(img, imgGray, CV_BGR2GRAY);
        }
        else{
            imgGray=img;
        }
        faceCascade.detectMultiScale(imgGray, faces,1.2,6,0,Size(0,0));//detect face;
        if(faces.size()>0){
            for(int i=0;i<faces.size();i++){
                rectangle(img, Point(faces[i].x,faces[i].y), Point(faces[i].x+faces[i].width,faces[i].y+faces[i].height), Scalar(0,255,0),1,8);//框出人脸位置
            }
        }
        imshow("Camera",img);
        c=waitKey(1);
    }
    
    return 0;
}

