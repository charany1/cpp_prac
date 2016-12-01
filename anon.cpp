#include<bits.h>

using namespace std;


#include <iostream>

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) { m_cents = cents; }

    int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2)
{
    Cents sum = Cents(c1.getCents() + c2.getCents());
    return sum;
}

int main()
{

    std::cout << "I have " << (add(Cents(5),Cents(6))).getCents() << " cents." << std::endl;

    return 0;
}
