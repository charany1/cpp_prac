
#include<bits/stdc++.h>

#pragma once

using namespace std;


class Point{
private:
    int m_x, m_y;
public:
    Point(int x = 0 ,int y = 0) : m_x(x) ,m_y(y){

    }

    friend ostream& operator<<(ostream& os, const Point& p);

};


ostream& operator<< (ostream& os , const Point& point){
     os << "(" << point.m_x << ", " << point.m_y << ")";
    return os;
}


