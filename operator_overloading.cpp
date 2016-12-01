
#include<bits/stdc++.h>

using namespace std;

class Cents{
private:
    int m_cents;

public:
    Cents(const Cents& cents){m_cents = cents.getm_cents();}
    Cents(int val){m_cents = val;}
    int getm_cents() const{return m_cents;}

    friend Cents operator+(const Cents& c1, const Cents& c2);


    //operator+ overloaded for different types
    friend Cents operator+(const Cents& c, const int& val){return Cents(c.m_cents + val);}
    friend Cents operator+(const int& val,const Cents& c){return Cents(val + c.m_cents) ;}


};

Cents operator+ (const Cents& c1 , const Cents& c2){
    return Cents(c1.getm_cents() + c2.getm_cents());
}

int main(){

    Cents c1(2);
    Cents c2(3);

    cout<<(c1 + 2).getm_cents()<<endl;
    cout<<(2 + c1).getm_cents()<<endl;

}
