#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A, Rect B){
    double x1;
    if(B.x > A.x){
        x1 = B.x;
    }else{
        x1 = A.x;
    }
    
    double x2;
    if(A.x + A.w < B.x + B.w){
        x2 = A.x + A.w;
    }else{
        x2 = B.x + B.w;
    } 
    
    double a;
    a = x2 - x1;
    
    double y1;
    if(B.y > A.y){
        y1 = A.y;
    }else{
        y1 = B.y;
    } 
    
    double y2;
    if(A.y - A.h > B.y - B.h){
        y2 = A.y - A.h;
    }else{
        y2 = B.y - B.h;
    }
    
    double b;
    b = y1 - y2;
    
    if(a <= 0 || b <= 0){
        return 0;
    }else{
        return a*b;
    }
}