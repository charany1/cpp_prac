#include<bits/stdc++.h>
using namespace std;

class MainClass;

class FriendClass{
public:
    void display_val(MainClass& mainClass);
};



class MainClass{

private:
    int val = 10;


    friend  FriendClass::display_val(MainClass&);

};


void FriendClass::display_val(MainClass& mainClass){
        cout<<mainClass.val;
    }



int main()
{

    MainClass mainClass ;
    FriendClass* friendClass = new FriendClass;
    friendClass->display_val(mainClass);

    return 0;
}
