#include<bits/stdc++.h>

using namespace std;


class Point{
private:
    int m_x, m_y;
public:
    Point(int x ,int y) : m_x(x) ,m_y(y){

    }

    friend void operator<< (ostream os, const Point& p);

};


void ostream& operator<< (ostream os , const Point& p){
    os<<p.m_x<<endl<<p.m_y<<endl;
    return os;
}


int main(){
Point p(2,3);
cout<<p;

return 0;
}
