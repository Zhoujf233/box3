//
//  box3.h
//  box3
//
//  Created by JF Zhou on 2019/8/1.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef box3_h
#define box3_h
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



#endif /* box3_h */
