#pragma once

class Cents{
private:
    int m_cents;

public:
    Cents(int cents){
        m_cents = cents;

    }

    int getCents() const {return m_cents;}


};

Cents operator+(const Cents &c1, const Cents &c2);
