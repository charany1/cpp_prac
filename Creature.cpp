
#include<bits/stdc++.h>
#include"Point2d.cpp"


using namespace std;


class Creature{

private:
    string m_name;
    Point m_location;

public:
    Creature(string name = "ram" , Point location = {0,0}): m_location(location), m_name(name){

    }

    friend ostream& operator<<(ostream&  , const Creature& );


};

ostream& operator<<(ostream& out, const Creature& creature){

    out<<creature.m_name<<endl;
    out<<creature.m_location<<endl;
    return out;

}


int main(){

    Creature animal("shyam",Point(2,3));
    cout<<animal<<endl;
}
