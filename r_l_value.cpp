#include<bits/stdc++.h>

using namespace std;


int square(const int&  x){return x*x;}

static int g_myglobal; //internal linkage

int& get_myglobal_ref(){return g_myglobal;}


template<typename T>
void print(T var){
    cout<<var<<endl;
}

int main(){

print(g_myglobal);

print(&get_myglobal_ref());

print(g_myglobal);


}

