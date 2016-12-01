#include<bits/stdc++.h>


using namespace std;


class MyString{




public:
    MyString(const char *str){
        m_str = (char*)malloc(strlen(str)+1);
        strcpy(m_str,str);
    }






   char* get_m_str ()const{
        return m_str;
   }

private:
    char* m_str;

    friend const MyString operator+(MyString my_string_1 , MyString my_string_2);



};

const MyString operator+ (const MyString& my_string_1,const MyString& my_string_2){
    char str1[80];
    char str2[80];

    strcpy(str1,my_string_1.get_m_str());
    strcpy(str2,my_string_2.get_m_str());

    return MyString(strcat(str1,str2));
 }


int main(){

char* str ;



  MyString str1("hi,");
  MyString str2("hello");

//  MyString temp = str1 + str2;
  cout<<str1.get_m_str()<<endl;
  cout<< string((str1 + str2).get_m_str())<<endl;

}
