#include<bits/stdc++.h>

using namespace std;



class Fraction{

private:
    int m_num , m_denom;
public:
    Fraction(int num , int denom){
        m_num =  num;
        m_denom = denom ;
    }

    void  print(){
        cout<<m_num <<" / "<< m_denom<<endl;
}

    friend Fraction operator*(const Fraction& f1, const Fraction& f2){
        return Fraction(f1.m_num * f2.m_num, f1.m_denom * f2.m_denom);
    }

};




int main()
{
    Fraction f1(1, 4);
    f1.print();

    Fraction f2(1, 2);
    f2.print();

    (f1 * f2).print();`

}
