//
//  main.cpp
//  box3
//
//  Created by JF Zhou on 2019/8/1.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

class Box
{
public:
    Box(int h =10,int w = 12,int len = 15):height(h),width(w),length(len){}
    int volume();
private:
    int height;
    int width;
    int length;
};

int Box::volume()
{
    return (height * width * length);
}

int main(int argc, const char * argv[])
{
    Box a[3] =
    {
        Box(10,12,15),
        Box(15,18,20),
        Box(16,20,26)
    };
    cout <<"The volume of a[0] is "<<a[0].volume()<<endl;
    cout <<"The volume of a[1] is "<<a[1].volume()<<endl;
    cout <<"The volume of a[2] is "<<a[2].volume()<<endl;
    return 0;
}
